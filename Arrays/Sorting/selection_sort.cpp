//
// Created by Jugesh Kumar on 30-01-2023.
//
#include <iostream>
using namespace std;
int main(){
    int arr[]={56,33,88,12,23,98,34,65,54};
    for(int i=0;i<sizeof(arr)/ sizeof(int)-1;i++){
        int min_index=i;
        for(int j=i+1;j<sizeof(arr)/ sizeof(int);j++){
            if(arr[j]<arr[min_index]){
               min_index=j;
            }
        }
        swap(arr[min_index],arr[i]);
    }
    for(int i=0;i<sizeof(arr)/ sizeof(int);i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}