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

node*reversell(node*head){
    node*prev=NULL;
    node*curr=head;

    while(curr!=NULL){
        node*ne=curr->next;
        curr->next=prev;
        prev=curr;
        curr=ne;
    }
    return prev;
}

void printll(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

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
        tail=p;
    }
}

int main(){
      node*head=NULL;
    node*tail=NULL;

    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int d;
        cin>>d;
        insertattail(head,tail,d);
    }
    node*nhead=reversell(head);
    printll(nhead);

    return 0;
}