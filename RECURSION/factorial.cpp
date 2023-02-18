//
// Created by Jugesh Kumar on 17-02-2023.
//
#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n* factorial(n-1);
}
int main(){
    int n;
    cin>>n;
    int fac= factorial(n);
    cout<<fac;
    return 0;
}
