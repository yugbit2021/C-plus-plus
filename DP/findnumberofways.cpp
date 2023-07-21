#include<iostream>
#include<climits>
using namespace std;

int totalways(int m,int n){
    //base case
    if(m==0 && n==0){
        return 1;
    }
    if(m<0 || n<0){
        return 0;
    }

    //rec case
    return totalways(m-1,n)+totalways(m,n-1);
}

int tdtotalways(int m,int n,int arr[100][100]){
    //base case
    if(m==0 && n==0){
        return arr[m][n]=1;
    }
    if(m<0 || n<0){
        return 0;
    }
    if(arr[m][n]!=0){
        return arr[m][n];
    }

    //rec case
    return arr[m][n]= tdtotalways(m-1,n,arr)+tdtotalways(m,n-1,arr);
}

int bptotalways(int m,int n){
    int arr[100][100]={0};

    for(int i=0;i<=m;i++){
    for(int j=0;j<=n;j++){
    if(i==0){
        arr[i][j]=1;
    }
    else if(j==0){
        arr[i][j]=1;
    }
    else{
        arr[i][j]=arr[i][j-1]+arr[i-1][j];
    }
}}
    return arr[m][n];
}
int main(){
    //Total ways to go from (0,0) to src 
    // You can go either right or down
    int m; // row
    cin>>m;
    int n; // col 
    cin>>n;
    cout<<totalways(m,n)<<endl; //(0,0) to (m,n);

    int arr[100][100]={0};
    cout<<tdtotalways(m,n,arr)<<endl;
    cout<<bptotalways(m,n);
}