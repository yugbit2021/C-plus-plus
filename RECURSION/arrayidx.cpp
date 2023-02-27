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
int main(){
    int arr[]={3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(int);
    if(ispresent(arr,n,0)==true){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}