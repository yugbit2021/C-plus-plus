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

node*kreverse(node*head,int k){
    //base case
    if(head==NULL){
        return head;
    }

    node*temp=head;
    for(int jump=1;jump<=k-1;jump++){
        temp=temp->next;
    }
    node*ptr=temp->next;
    temp->next=NULL;
    node*nhead=reversell(head);
    node*t=nhead;
    for(int jump=1;jump<=k-1;jump++){
        t=t->next;
    }
    t->next=kreverse(ptr,k);
    return nhead;
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
    //int k=3;
    node*nhead1=kreverse(head,3);
    printll(nhead1);

    return 0;
}