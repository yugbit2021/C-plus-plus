//https://hack.codingblocks.com/app/contests/3858/404/problem
// Created by Jugesh Kumar on 06-02-2023.
//
#include<iostream>
using namespace std;
int xorOfArray(int arr[], int n)
{
    int xor_arr = 0;
    for (int i = 0; i < n; i++) {
        xor_arr = xor_arr ^ arr[i];
    }
    return xor_arr;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=1;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //cout << xorOfArray(arr, n) << endl;

    return 0;
}