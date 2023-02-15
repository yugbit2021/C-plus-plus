//https://hack.codingblocks.com/app/contests/3858/561/problem
// Created by Jugesh Kumar on 07-02-2023.
//
#include <iostream>
using namespace std;
void ss(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int min_index=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[min_index],arr[i]);
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ss(arr,n);
    return 0;
}
