//https://hack.codingblocks.com/app/contests/3858/273/problem
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

void insertattail(node *&head , node *&tail,int data){
    if(head==NULL){
        node*p=new node(data);
        head=p;
        tail=p;
    }
    else{
        node*p=new node(data);
        tail->next=p;
        tail=p;
    }
}
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
node*deletegreaterinright(node*&head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* reverse= reversell(head);
    node*temp=reverse;
    int max=temp->data;

    while(temp->next!=NULL){
        if(temp->next->data>max){
            max=temp->next->data;
            temp=temp->next;
        }else{
            temp->next=temp->next->next;
        }
    }
    head=reversell(reverse);

    return head;
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

    int n;
    cin>>n;
    int data;
    

for(int i=0;i<n;i++){
    
    cin>>data;
       insertattail(head,tail,data);
}
node*nhead=deletegreaterinright(head);
printll(nhead);

}