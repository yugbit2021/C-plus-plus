#include<iostream>
using namespace std;
int main(){
    int*aptr=new int[5];
    for(int i=0;i<5;i++){
        cin>>aptr[i];
    }
    for(int i=0;i<5;i++){
        cout<<aptr[i]<<" ";
    }
    delete []aptr;
    aptr=NULL;
    return 0;
}