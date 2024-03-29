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
bool checkcyle(node*head){
    node*p1=head;
    node*p2=head;

    while(p1!=NULL && p1->next!=NULL){
        p1=p1->next;
    p2=p2->next->next;
    if(p1==p2){
        return true;
    }
    }
    return false; 
}

void createcylce(node*head,int pos){
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node*t=head;
    for(int jump=1;jump<=pos;jump++){
        t=t->next;
    }
    temp->next=t;
}
void breakcyclell(node*head){
    //check cycle present or not
    node*p1=head;
    node*p2=head;

    bool iscycleispresent=false;
    while(p1!=NULL && p2->next!=NULL){
        p1=p1->next;
    p2=p2->next->next;
    if(p1==p2){
        iscycleispresent= true;
        break;
    }
    }
    if(iscycleispresent==true){
        //floyd cycle detection

        //step  move p1/p2 back to head
        p1=head;
        //p1 & p2 move by 1x
        while(p1->next!=p2->next){
             p1=p1->next;
        p2=p2->next;
        }
        p2->next=NULL;
       
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
    // if(checkcyle(head)==true){
    //     cout<<"cycle is present";
    // }
    // else{
    //     cout<<"not present";
    // }

    int pos=2;

    createcylce(head,pos);
    breakcyclell(head);
    printll(head); 

    return 0;
}