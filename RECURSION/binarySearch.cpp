#include<iostream>
using namespace std;

int bs(int arr[],int key,int s,int e){
    //base case
    if(s>e){
        return -1;
    }

    //recusive case
    int mid= (s+e)/2;
    if(arr[mid]>key){
        return bs(arr,key,s,mid-1);
    }
    else if(arr[mid]<key){
        return bs(arr,key,mid+1,e);
    }
    else{
        return mid;
    }
}

int main(){
    int arr[]={3,5,7,8,9};
    int n= sizeof(arr)/sizeof(int);
    int ans=bs(arr,8,0,n-1);
    cout<<ans;
    return 0;
}