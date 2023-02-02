//
// Created by Jugesh Kumar on 01-02-2023.
//
#include<iostream>
using namespace std;
int fact(int n);
int main(){
    int a;
    cin>>a;
    cout<<fact(a);
}
int fact(int n){
    int ans=1;
    for(int i=n;i>0;i--){
        ans= ans * i;
    }
    return ans;
}