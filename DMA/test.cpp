#include<iostream>
using namespace std;
int main(){
    //new = it will give us address
    int*aptr=new int; 
    *aptr=10;
    cout<<*aptr;
    return 0;
}