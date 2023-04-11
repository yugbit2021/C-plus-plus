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
bool searchinll(node*head, int key){
    
    while(head!=NULL){
        if(head->data==key){
            return true;
        }
        head=head->next;
    }
    return false;
}
void printll(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
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
//mid point of even ll without using length function
int midpointofll(node*head){
    node*slow=head;
    node*fast=head->next;

    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
    slow=slow->next;
    }
    return slow->data;
}
int lengthofll(node*&head){
    int co=0;
    node*temp=head;
    while(temp!=NULL){
        co++;
    temp=temp->next;
    }
    return co;
    
}
void bubblesort(node*&head,node*&tail){
    // address wahi rahega bss data change hoga
    for(int i=0;i<lengthofll(head)-1;i++){
        for(node*j=head;j->next!=tail;j=j->next){
            if(j->data>j->next->data){
                swap(j->data,j->next->data);
            }
        }
    }
}
int main(){
    node*head=NULL;
    node*tail=NULL;

    int n;//5
    cin>>n;
    for(int i=0;i<n;++i){
        int d;
        cin>>d;
        insertattail(head,tail,d);
    }
    cout<<"mid point is "<<midpointofll(head)<<endl;
    printll(head);
    cout<<endl;
    bubblesort(head,tail);
    cout<<endl;
    printll(head);
    return 0;
}