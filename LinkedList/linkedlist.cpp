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

void insertattail(node*&head, node*&tail ,int d){
    //linkedlist is empty
    if(head==NULL){
        node*p=new node(d);
        head=p;
        tail=p;
    }
    else{
        node*p=new node(d);
        tail->next=p;
        p=tail;
    }
}

void insertatfirst(node*&head, node*&tail, int d){
    //linkedlist is empty
    if(head==NULL){
        //node y(d); I will not create it statically
        node*p=new node(d);
        head=p;
        tail=p;
    }
    //agar linkedlist is not empty
    else{
        node*p=new node(d);
        p->next=head;
        head=p;
    }
}

void printll(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void deleteatfront(node*&head, node*&tail){
    //if ll is empty
    if (head==NULL){
        return;
    }
    // ll is only one node
    else if(head->next==NULL){
        delete head;
        head=NULL;
        tail=NULL;
    }
    else{
        node*temp=head->next;
        delete head;
        head=temp;
    }
}

int main(){
    // node x(9);
    // node y(3);
    // x.next=&y;
    // // cout<<(*x.next).data;
    // cout<<x.next->data;

    node*head=NULL;
    node*tail=NULL;

    insertatfirst(head,tail,2);
    insertatfirst(head,tail,3);
    insertatfirst(head,tail,9);
    insertatfirst(head,tail,6);
    insertattail(head,tail,12);
    deleteatfront(head,tail);
    printll(head);

    return 0;
}