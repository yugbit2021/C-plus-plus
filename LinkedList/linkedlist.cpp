#include<iostream>
using namespace std;

//self refrential class
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
    node*fast=head;

    while(fast->next!=NULL){
        fast=fast->next->next;
    slow=slow->next;
    }
    return slow->data;
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
int lengthofll(node*&head){
    int co=0;
    node*temp=head;
    while(temp!=NULL){
        co++;
    temp=temp->next;
    }
    return co;
    
}

void deleteatfront(node*&head, node*&tail){
    //if ll is empty
    if (head==NULL){
        return;
    }
    // ll is only one node
    else if(head->next==NULL){
        delete head;
        head=NULL;
        tail=NULL;
    }
    else{
        node*temp=head->next;
        delete head;
        head=temp;
    }
}

void insertatanypos(node*&head , node*&tail , int d , int pos){
    if(pos==0){
        insertatfirst(head,tail,d);
    }
    else if(pos>=lengthofll(head)){
        insertattail(head,tail , d);
    }else{
        node*temp=head;

        for(int jump=1;jump<=pos-1;jump++){
            temp=temp->next;
        }
        node*p=new node(d);
        p->next=temp->next;
        temp->next=p;
    }
}
void deleteattail(node*&head , node*&tail){
    if(head==NULL){
        return ;
    }
    //single node
    else if (head->next==NULL){
        delete tail;
        tail=NULL;
        head=NULL;
    }
    //multi node
    else{
        node*temp=head;
        while(temp->next->next==NULL){
            temp=temp->next;
        }
        delete tail;
        tail=temp;
        tail->next=NULL;

    }
}

void deleteatanypos(node*&head , node*&tail , int pos){
    if(pos==0){
        deleteatfront(head,tail);
    }
    else if(pos>lengthofll(head)){
        deleteattail(head,tail);
    }else{
        node*temp=head;
        for(int jump=1;jump<=pos-1;jump++){
            temp=temp->next;
        }
        node*t=temp->next;
        temp->next=t->next;
        delete t;
        t=NULL;
    }
}
bool searchinll(node*&head, int key){
    node*temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
//searching through recursively
bool searchinllrec(node*&head, int key){
    //base case
    if(head==NULL){
        return false;
    }


    //rec case
    if(head->data==key){
        return true;
    }
    return searchinllrec(head->next,key);
}

int main(){
    // node x(9);
    // node y(3);
    // x.next=&y;
    // // cout<<(*x.next).data;
    // cout<<x.next->data;

    node*head=NULL;
    node*tail=NULL;

    insertatfirst(head,tail,2);
    insertatfirst(head,tail,3);
    insertatfirst(head,tail,9);
    insertatfirst(head,tail,6);
    insertattail(head,tail,12);
    insertatanypos(head,tail,17,3);
    deleteatfront(head,tail);
    printll(head);
    if(searchinll(head,18)==true){
        cout<<"key is present";
    }
    else{
        cout<<"Key is not present";
    }
    cout<<endl;
    cout<<"mid point is"<<midpointofll(head)<<endl;

    return 0;
}