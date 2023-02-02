//
// Created by Jugesh Kumar on 30-01-2023.
//
#include<iostream>
using namespace std;
int main(){
    int arr[]={5,1,2,4,3};
    for(int i=0;i< sizeof(arr)/ sizeof(int)-1;i++){
        bool isSwap= false;
        for(int j=0;j< sizeof(arr)/ sizeof(int)-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap= true;
            }
        }
        if(isSwap== false){
            break;
        }
    }
    for(int i=0;i< sizeof(arr)/ sizeof(int);i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
