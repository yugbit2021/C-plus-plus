#include<iostream>
using namespace std;
bool ispresent(int arr[],int n ,int i){
    //base case
    if(i==n){
        return false;
    }
    //recursive case
    if(arr[i]==7){
        return true;
    }
    return ispresent(arr,n,i+1);
}

int firstinxof7(int arr[],int n,int i){
    if(i==n){
        return -1;
    }

    if(arr[i]==7){
        return i;
    }
return firstinxof7(arr,n,i+1);
}

void allindices(int arr[],int n,int i){
    if(i==n){
        return;
    }

    if(arr[i]==7){
        cout<<i<<" ";
    }
    allindices(arr,n,i+1);
}

int main(){
    int arr[]={3,7,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(int);
    if(ispresent(arr,n,0)==true){
        cout<<"true";
    }else{
        cout<<"false";
    }
    cout<<endl;
    cout<<"Element is present at "<<firstinxof7(arr,n,0)<<endl;
    allindices(arr,n,0);
    return 0;
}