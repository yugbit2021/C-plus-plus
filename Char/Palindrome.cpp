#include<iostream>
using namespace  std;

int lengthofarr(char arr[]){
    int i=0;
    int count=0;
    while(arr[i]!='\0'){
        count++;
        i++;
    }
    return count;
}

bool palindromeornot(char arr[]){
    int i=0;
    int j=lengthofarr(arr)-1;

    while(i<j){
        if(arr[i]==arr[j]){
        i++;
        j--;
    }else{
         return false;
    }
    }
   return true; 
}
int main(){
    char arr[100];
    cin.getline(arr,100);
    if(palindromeornot(arr)==true){
        cout<<"is palindrome";
    }else{
        cout<<"Not palindrome";
    }
    return 0;
}