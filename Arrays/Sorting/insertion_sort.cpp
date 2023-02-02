//
// Created by Jugesh Kumar on 30-01-2023.
//
#include <iostream>
using namespace std;
int main(){
    int arr[]={5,4,1,3,2};
    for(int i=1;i<=sizeof(arr)/ sizeof(int)-1;i++){
        int current=arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(current<arr[j]){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=current;
    }
    for(int i=0;i<sizeof(arr)/ sizeof(int);i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
