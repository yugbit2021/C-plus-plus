//
// Created by Jugesh Kumar on 11-02-2023.
//
#include<iostream>
using namespace std;
int char_count(char arr[]){
    int count=0;

    int i=0;
    while(arr[i]!='\0'){
        count++;
        i++;
    }
    return count;
}
int main(){
    char arr[100];


cin.getline(arr,100);


    cout<<"lenght of array is "<<char_count(arr)<<endl;
    return 0;
}
