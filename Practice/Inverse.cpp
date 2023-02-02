//
// Created by Jugesh Kumar on 01-02-2023.
//
#include<iostream>
using namespace std;
int main(){
    int a = 32145;
    int b=a;
    int count=0;
    while(a>0){
        a=a/10;
        count++;
    }

    int arr[count];
    for(int i=0;i<count;i++){
        int rem=b%10;
        arr[rem-1]=i+1;// arr[4]=1 ; arr[4]=2; arr[0]=3; arr[1]=4; arr[2]=5;
        b=b/10;
    }
    // arr[] = {3,4,5,2,1};
    for(int i=count-1;i>=0;i--){ // print in reverse
        cout<<arr[i]; //12543
    }
    return 0;
}