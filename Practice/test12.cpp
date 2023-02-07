//https://hack.codingblocks.com/app/contests/3858/190/problem
// Created by Jugesh Kumar on 07-02-2023.
//
#include <iostream>
using namespace std;
void bubble(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    bubble(arr,N);
    return 0;
}