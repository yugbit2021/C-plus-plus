//https://hack.codingblocks.com/app/contests/3858/21/problem
// Created by Jugesh Kumar on 07-02-2023.
//
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
 int arr[n];
    for(int i=0;i<n;i++){
        int rem=a[i]%10;
        arr[rem]=i;// arr[4]=1 ; arr[4]=2; arr[0]=3; arr[1]=4; arr[2]=5;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}