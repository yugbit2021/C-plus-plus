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
        p=tail;
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
int main(){
    node*head=NULL;
    node*tail=NULL;

    int n;//5
    cin>>n;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        insertattail(head,tail,d);
    }
    printll(head);
    return 0;
}