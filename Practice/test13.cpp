//https://hack.codingblocks.com/app/contests/3858/398/problem
// Created by Jugesh Kumar on 07-02-2023.
//
#include <iostream>
using namespace std;
int ls(int arr[],int target){
    for(int i=0;i<5;i++){
        if(arr[i]==target){
            return i;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[5];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
cout<<ls(arr,target);
 return 0;
}