// https://hack.codingblocks.com/app/contests/3858/171/problem
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

    int lengthofll(node*head){
        node*temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        return count;
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
    int kthelementfromend(node*head,int k){
        node*temp=head;
        int x=lengthofll(head)-k;
        for(int i=1;i<x;i++){
            temp=temp->next;
        }
        return temp->data;
    }

    int kthnodefromend(node*head ,int k){
    node*p1=head;
    node*p2=head;

    for(int jump=0;jump<=k;jump++){
        p2=p2->next;
    }
    while(p2!=NULL){
        p1=p1->next;
    p2=p2->next;
    }
    return p1->data;
}


int main(){
    node*head=NULL;
    node*tail=NULL;
    
    while(head==NULL || tail->data!=-1){
        int d;
        cin>>d;
        insertattail(head,tail,d);
    }
    //printll(head);
    int k;
    cin>>k;
    int ans=kthelementfromend(head,k);
    cout<<ans<<endl;
    cout<<kthnodefromend(head,k);
    return 0;
}