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

node*midpointofll(node*head){
    node*slow=head;
    node*fast=head->next;

    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
    slow=slow->next;
    }
    //return slow->data;
    return slow;
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
node*mergesort(node*head){
    //base case
    if(head==NULL || head->next==NULL){
        return head;
    }

    //rec case
    node*m=midpointofll(head);
    node*temp=m->next;
    m->next=NULL;
    node*x=mergesort(head);//2 4 5
    node*y=mergesort(temp);//1 3
    return mergeintosortedll(x,y);
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
    node*nhead=mergesort(head);
    printll(nhead);
    return 0;
}