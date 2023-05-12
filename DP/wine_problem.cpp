#include<iostream>
using namespace std;

// int maxprofit(int wprice[],int l,int r,int year){
// //base case
// if(l>r){
//     return 0;
// }

// //rec case
// int op1=year*wprice[l]+maxprofit(wprice,l+1,r,year+1);
// int op2=year*wprice[r]+maxprofit(wprice,l,r-1,year+1);
// return max(op1,op2);
// }

int tdmaxprofit(int wprice[],int l,int r,int year,int arr[][]){
//base case
if(l>r){
    return arr[l][r]=0;
}

//rec case
if(arr[l][r]!=0){
    return arr[l][r];
}
int op1=year*wprice[l]+tdmaxprofit(wprice,l+1,r,year+1,arr);
int op2=year*wprice[r]+tdmaxprofit(wprice,l,r-1,year+1,arr);
return arr[l][r]=max(op1,op2);
}

int main(){
    int wprice[]={2,3,5,1,4};
    int n=sizeof(wprice)/sizeof(int);
    int arr[100][100];
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            arr[i][j]==0;
        }
    }
    cout<<tdmaxprofit(wprice,0,n-1,1,arr)<<endl;
    //cout<<maxprofit(wprice,0,n-1,1);
}