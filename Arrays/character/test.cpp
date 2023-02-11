//
// Created by Jugesh Kumar on 11-02-2023.
//
#include <iostream>
using namespace std;
int main(){
    char arr[100];


//    //cin.getline(arr,100);
//    // delimiter is like condition
//    cin.getline(arr,100,'$');
char ch;
cin>>ch;
int i=0;
while(ch!='$'){
    arr[i]=ch;
    i++;
    cin>>ch;
}
    cout<<arr<<endl;
    return 0;
}