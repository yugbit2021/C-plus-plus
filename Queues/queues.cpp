#include<iostream>
using namespace std;

class node{
    public:

    int data;
    node*next;

    node(int d){
        data=d;
        next=NULL;
    }
};

class queue{
    node*head;
    node*tail;
    int len;

    public:

    queue(){
        head=NULL;
        tail=NULL;
        len=0;
    }
    //push 
    //insert at tail
    void push(int d){
         if(head==NULL){
        node*p=new node(d);
        head=p;
        tail=p;
        len++;
    }
    else{
        node*p=new node(d);
        tail->next=p;
        tail=p;
        len++;
    }
    }

    //pop delete at front
    void pop(){
        if (head==NULL){
        return;
    }
    // ll is only one node
    else if(head->next==NULL){
        delete head;
        head=NULL;
        tail=NULL;
        len--;
    }
    else{
        node*temp=head->next;
        delete head;
        head=temp;
        len--;
    }
    }

    //front
    int front(){
        return head->data;
    }

    //size
    int size(){
        return len;
    }

    //empty
    bool empty(){
        return len==0;
    }
};

int main(){
    queue q;
    q.push(4);
    q.push(1);
    q.push(6);

    while(!q.empty()){
        cout<<q.front()<<" ";
    q.pop();
    }
    
    return 0;
}