//
// Created by Jugesh Kumar on 01-02-2023.
//
#include<iostream>
using namespace std;
int fibo(int n){
    if(n<2){
        return n;
    }
    return fibo(n-1)+ fibo(n-2);
}
int main(){
    int trow;
    cin>>trow;
    int row=1;
    int no=0;
    while(row<=trow){
        int i=1;
        while(i<=row){
            cout<<fibo(no)<<" ";
            no++;
            i++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}