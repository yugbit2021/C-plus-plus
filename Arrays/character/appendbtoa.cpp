//
// Created by Jugesh Kumar on 11-02-2023.
//
#include <iostream>
using namespace std;
int length_of_arr(char arr[]){
    int count=0;

    int i=0;
    while(arr[i]!='\0'){
        count++;
        i++;
    }
    return count;
}
void append(char arr[],char arr1[]){
    int i=length_of_arr(arr);
    int j=0;
    while(j<=length_of_arr(arr1)){
        arr[i]=arr1[j];
        i++;
        j++;
    }
    cout<<arr<<endl;
    cout<<arr1<<endl;
}
int main(){
    char arr[100];
    char arr1[100];

    cin.getline(arr,100);
    cin.getline(arr1,100);
    append(arr,arr1);
    return 0;
}
