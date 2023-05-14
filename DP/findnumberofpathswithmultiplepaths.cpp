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
    //rec acse
    int tw=0;//totalways
    for(int i=0;i<m;i++){
        tw=tw+totalways(i,n);
    }
    for(int i=0;i<n;i++){
        tw=tw+totalways(m,i);
    }
    return tw;
}

int tdtotalways(int m,int n,int arr[100][100]){
    //base case
     if(m==0 && n==0){
        return arr[m][n]= 1;
    }
    if(m<0 || n<0){
        return 0;
    }
    //rec acse
    if(arr[m][n]!=0){
        return arr[m][n];
    }
    int tw=0;//totalways
    for(int i=0;i<m;i++){
        tw=tw+tdtotalways(i,n,arr);
    }
    for(int i=0;i<n;i++){
        tw=tw+tdtotalways(m,i,arr);
    }
    return arr[m][n]=tw;
}

int bptotalways(int m,int n){
    int arr[100][100]={0};

    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 && j==0){
                arr[i][j]=1;
            }
            else if(j==0){
                if(i>2){
                    arr[i][j]=arr[i-1][j]+arr[i-2][j]+i-2;
                }else{
                arr[i][j]=arr[i-1][j]+arr[i-2][j];
            }}
             else if(i==0){
                if(j>2){
                    arr[i][j]=arr[i][j-1]+arr[i][j-2]+j-2;
                }else{
                arr[i][j]=arr[i][j-1]+arr[i][j-2];
            }}

            else{
                if(i>=2 && j<2){
                    arr[i][j]=arr[i-1][j]+arr[i-2][j] + arr[i][j-1]+arr[i][j-2] + i-2 ;
                }
                else if(j>=2 && i<2){
                     arr[i][j]=arr[i-1][j]+arr[i-2][j] + arr[i][j-1]+arr[i][j-2] + j-2 ;
                }
                else{
                arr[i][j]=arr[i-1][j]+arr[i-2][j] + arr[i][j-1]+arr[i][j-2] ;
            }}
        }
}

for(int i=0;i<=m;i++){
    for(int j=0;j<=n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

    return arr[m][n];
}

int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    cout<<totalways(m,n)<<endl;

    int arr[100][100]={0};
    cout<<tdtotalways(m,n,arr)<<endl;
    for(int i=0;i<=m;i++){
    for(int j=0;j<=n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;

    cout<<bptotalways(m,n)<<endl;

}