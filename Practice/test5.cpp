//
// Created by Jugesh Kumar on 01-02-2023.
//
#include <iostream>
using namespace std;
int main(){
    int a ,b , c;
    cin>>a;
    cin>>b;
    cin>>c;
    int largest=a;
    if(b>a){
        largest=b;
    }
    else if(c>a){
        largest=c;
    }
    cout<<largest;
    return 0;
}