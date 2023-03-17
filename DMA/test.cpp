#include<iostream>
using namespace std;
int main(){
    //new = it will give us address
    int*aptr=new int; 
    *aptr=10;
    cout<<*aptr;

    //delete keyword
    //delete a variable;
    delete aptr;
    aptr=NULL;
    return 0;
}