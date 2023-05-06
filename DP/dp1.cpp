#include<iostream>
using namespace std;
// int fibo(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return fibo(n-1)+fibo(n-2);
// }

//topdown sol
int dpfibo(int n,int *arr){
    if(n==0 || n==1){
        return arr[n]=n;
    }
    //calculate se pahle check
    if(arr[n]!=-1){
        return arr[n];
    }
    return arr[n]=dpfibo(n-1,arr)+dpfibo(n-2,arr);
}

//bottom up solution
int fibobottomup(int n){
    int *arr=new int[n+1];
    arr[0]=0;
    arr[1]=1;

    for(int i=2;i<=n;i++){
         arr[i]=arr[i-1]+arr[i-2];
    }
    // for(int i=0;i<=n;i++){
    //     cout<<arr[i]<<" ";
    // }
    //cout<<endl;
   return arr[n];
    
    }

int main(){
    int n;
    cin>>n;
    //cout<<fibo(n)<<endl;

    //
int *arr=new int[n+1];
for(int i=0;i<=n;++i){
    arr[i]=-1;
}


cout<<dpfibo(n,arr)<<endl;
cout<<fibobottomup(n);
    return 0;
}