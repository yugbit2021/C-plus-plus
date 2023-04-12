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


node*mergeintosortedll(node*head1,node*head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    node*newhead=NULL;

    if(head1->data<head2->data){
        newhead=head1;
        newhead->next=mergeintosortedll(head1->next,head2);
        return newhead;
    }
    else{
        newhead=head2;
        newhead->next=mergeintosortedll(head1,head2->next);
        return newhead;
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

int main(){
    node*head1=NULL;
    node*tail1=NULL;

    int m;//5
    cin>>m;
    for(int i=0;i<m;++i){
        int d;
        cin>>d;
        insertattail(head1,tail1,d); // 1 3 5 8
    }
    node*head2=NULL;
    node*tail2=NULL;

    int n;//5
    cin>>n;
    for(int i=0;i<n;++i){
        int d;
        cin>>d;
        insertattail(head2,tail2,d);// 0 2 2 4 6
    }

    node*nhead=mergeintosortedll(head1,head2);
    printll(nhead);
}