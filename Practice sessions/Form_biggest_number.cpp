//
// Created by Jugesh Kumar on 02-02-2023.
//
//1
//4
//54 546 548 60
//6054854654
#include<iostream>
#include<math.h>
using namespace std;
int digitsin(int a){
    int count=0;
    while(a>0){
        count++;
        a=a/10;
    }
}
int main(){
    int t;
    cin>>t; //test cases
    while(t--){
        int m;
        cin>>m;
        int arr[100];
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }
        //bubble sort
        for(int i=0;i<m-1;i++){
            for(int j=0;j< m-i-1;j++){
                int no1=(arr[j]* pow(10,digitsin(arr[j+1])))+arr[j+1];
                int no2=(arr[j+1]* pow(10,digitsin(arr[j])))+arr[j];
                if(no1>no2){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
        //print in reverse
        for(int i=m-1;i>=0 ;i--){
            cout<<arr[i];
        }
    }


    return 0;
}