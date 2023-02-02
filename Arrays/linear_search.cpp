//
// Created by Jugesh Kumar on 29-01-2023.
//
#include <iostream>
using namespace std;
int main(){
    int arr[]={4,5,6,1,2,9,7};
    int target=17;
    int i=0;
    while(i<=sizeof(arr)/ sizeof(int)){
        if(arr[i]==target){
            cout<<i;
            break;
        }
        if(i==sizeof(arr)/ sizeof(int)){
            cout<<"Target is not found";
        }
        i++;
    }
    return 0;
}