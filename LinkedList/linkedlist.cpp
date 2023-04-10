#include<iostream>
using namespace std;

//self refrential class
class node{
    public: 

    int data;
    node*next;
    node(int d){
        data=d;
        next=NULL;
    }
};

int main(){
    node x(9);
    node y(3);
    x.next=&y;
    cout<<(*x.next).data;

    return 0;
}