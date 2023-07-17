#include<iostream>
#include<climits>
using namespace std;

int mincoinsneeded(int deno[],int amount,int n){
    //base case
    if(amount==0){
        return 0;
    }

    //rec case
    int ans=INT_MAX;
    for(int j=0;j<n;j++){
    int remaining_amount=amount-deno[j];//12
    if(remaining_amount>=0){
        int a=mincoinsneeded(deno,remaining_amount,n);//4
        ans=min(ans,a+1);
    }
    }
    return ans;
}

//topdown
int tdmincoinsneeded(int deno[],int amount,int n,int *arr){
    //base case
    if(amount==0){
        return arr[amount]=0;
    }

    //rec case
    if(arr[amount]!=INT_MAX){
        return arr[amount];
    }
    int ans=INT_MAX;
    for(int j=0;j<n;j++){
    int remaining_amount=amount-deno[j];//12
    if(remaining_amount>=0){
        int a=tdmincoinsneeded(deno,remaining_amount,n,arr);//4
        ans=min(ans,a+1);
    }
    }
    return arr[amount]=ans;
}

//bottomup
int bumincoinsneeded(int deno[],int amount,int n){

   int *arr=new int[amount+1];
   for(int i=0;i<=amount;i++){
    arr[i]=INT_MAX;
   }
   arr[0]=0;
   for(int currentamount=1;currentamount<=amount;currentamount++){

   for(int j=0;j<n;j++){
   int bachaamount=currentamount-deno[j];
   if(bachaamount>=0){
    arr[currentamount]=min(arr[bachaamount]+1,arr[currentamount]);
   }
   }}
   return arr[amount];
}

int main(){
    int deno[]={1,5,6,9};
    int n=sizeof(deno)/sizeof(int);
    int amount;
    cin>>amount;
    
    int arr[amount+1];
    for(int i=0;i<amount+1;i++){
        arr[i]=INT_MAX;
    }

    cout<<bumincoinsneeded(deno,amount,n)<<endl;
    
    cout<<tdmincoinsneeded(deno,amount,n,arr)<<endl;

    cout<<mincoinsneeded(deno,amount,n)<<endl;
}