//
// Created by Jugesh Kumar on 11-02-2023.
//
#include <iostream>
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
bool palindrome(char arr[]){
    int i=0;
    int last= char_count(arr)-1;
    while(i<last){
        if(arr[i]==arr[last]){
            i++;
            last--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    char arr[100];
   cin.getline(arr,100);
   cout<<palindrome(arr);
    return 0;
}