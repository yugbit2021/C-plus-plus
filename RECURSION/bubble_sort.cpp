#include<iostream>
using namespace std;

void bs(int arr[],int n,int i,int j){
    //base case
    if(i==n-1){
        return;
    }

    //recusive case
    if(j==n-i-1){
        bs(arr,n,i+1,0);
    }else{
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
        bs(arr,n,i,j+1);
    }
}
int main(){
    int arr[]={5,4,1,2,3};
    bs(arr,5,0,0);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}