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

int midpointofll(node*head){
    node*slow=head;
    node*fast=head->next;

    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
    slow=slow->next;
    }
    return slow->data;
}

int kthnodefromend(node*head ,int k){
    node*p1=head;
    node*p2=head;

    for(int jump=1;jump<=k;jump++){
        p2=p2->next;
    }
    while(p2!=NULL){
        p1=p1->next;
    p2=p2->next;
    }
    return p1->data;
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
    int k;
    cin>>k;
    int ans=kthnodefromend(head,k);
    cout<<ans;
    int k;
    cin>>k;
    cout<<kthnodefromend(head,k);
    return  0;
}