#include<iostream>
using namespace std;

int maxprofit(int wprice[],int l,int r,int year){
//base case
if(l>r){
    return 0;
}
//rec case
int op1=year*wprice[l]+maxprofit(wprice,l+1,r,year+1);
int op2=year*wprice[r]+maxprofit(wprice,l,r-1,year+1);
return max(op1,op2);
}


//depends upon 2 variables i.e use 2D array
int tdmaxprofit(int wprice[],int l,int r,int year,int *arr[][]){
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

int bpmaxprofit(int wprice[],int el,int er,int n){
    int arr[100][100]={0};

    for(int i=0;i<n;i++){
        arr[i][i]=n*wprice[i];
    }

    for(int l=n-2;l>=0;l--){
    for(int r=0;r<n;r++){
    if(r>l){
        int year=n-(r-l);
        int op1=year*wprice[l]+arr[l+1][r];//4+20
        int op2=year*wprice[r]+arr[l][r-1];//16+5

        arr[l][r]=max(op1,op2);
    }}}
    return arr[el][er];
}



int main(){
    int wprice[]={2,3,5,1,4};
    int n=sizeof(wprice)/sizeof(int);
    int arr[100][100]={0};
    
    cout<<tdmaxprofit(wprice,0,n-1,1,arr)<<endl;
    cout<<bpmaxprofit(wprice,0,n-1,n);
    cout<<maxprofit(wprice,0,n-1,1);
}