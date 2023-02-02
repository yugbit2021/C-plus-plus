//
// Created by Jugesh Kumar on 01-02-2023.
//
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t; // number of test cases
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<t;i++){
        for(int j=0;j<n;j++){
            cin>>arr[j];// taking input
        }
    }
    int arr1[n];
    for(int j=0;j<n;j++){
        arr1[j]=arr[j];// taking input
    }

int arr3[sizeof(arr)/ sizeof(int)];

for(int i=0;i<sizeof(arr)/ sizeof(int);i++){
    arr3[i];
    while(arr1[i]>0){
        arr3[i]=arr1[i]%10;
        arr1[i]=arr1[i]/10;
    }
}
    for(int i=0;i<sizeof(arr)/ sizeof(int)-1;i++){
        int min_index=i;
        for(int j=i+1;j<sizeof(arr)/ sizeof(int);j++){
            if(arr3[j]<arr3[min_index]){
                min_index=j;
            }
        }
        swap(arr[min_index],arr[i]);
        swap(arr3[min_index],arr3[i]);
    }
    for(int i=sizeof(arr)/ sizeof(int)-1;i>=0;i--){
        cout<<arr[i];
    }

    return 0;
}
