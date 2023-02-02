//
// Created by Jugesh Kumar on 29-01-2023.
//
#include <iostream>
using namespace std;
int main(){
    int arr[]={2,5,72,1,3,5,2,11,457};
    int largest=0;
    for(int i=0;i< sizeof(arr)/ sizeof(int);i++){
        if(arr[i]>=largest){
            largest=arr[i];
        }
    }
    cout<<largest;
}