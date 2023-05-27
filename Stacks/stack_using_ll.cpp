#include<iostream>
using namespace std;
//template<typename U>
class node{
    public: 

    int data;
    node*next;
    node(int d){
        data=d;
        next=NULL;
    }
};

class stack{
    node*head;
    int l;
    
    public:
    stack(){
        head=NULL;
        l=0;
    }

    void push(char d){
        node*n=new node(d);
        n->next=head;
        head=n;
        l++;
    }


    void pop(){
       //if ll is empty
    if (head==NULL){
        return;
    }
    // ll is only one node
    else if(head->next==NULL){
        delete head;
        head=NULL;
    }
    else{
        node*temp=head->next;
        delete head;
        head=temp;
    }
    l--;
    }


    int size(){
        return l;
    }


    char top(){
       return head->data;
    }


    bool empty(){
        return head==NULL;
    }
};

int main(){
    stack s;
    s.push('A');
    s.push('B');
    s.push('C');

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}