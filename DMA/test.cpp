#include<iostream>
using namespace std;
int main(){
    //new = it will give us address
    int*aptr=new int; 
    *aptr=10;
    cout<<*aptr<<endl;

    //delete keyword
    //delete a variable;
    delete aptr;
    aptr=NULL;
    cout<<*aptr;
    return 0;
}