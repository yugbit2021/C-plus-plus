#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node*next;
	node*prev;
	node(int da){
		data=da;
		next=NULL;
		prev=NULL;
	}
};

void insertattail(node*&head,node*&tail,int d){
	if(head==NULL){
		node*p=new node(d);
		head=p;
		tail=p;
	}else{
		node*p=new node(d);
		tail->next=p;
		p->prev=tail;
		tail=p;
	}
}
void insertatfront(node*&head,node*&tail,int d){
	if(head==NULL){
		node*p=new node(d);
		head=p;
		tail=p;
	}else{
		node*p=new node(d);
		p->next=head;
		head->prev=p;
		head=p;
	}
}

node*sumofll(node*tail,node*tail1){
	node*sumhead=NULL;
	node*sumtail=NULL;
	//base case
	if(tail->prev==NULL || tail1->prev==NULL){
		return sumhead;
	}

	//rec case
	if(tail==NULL && tail1!=NULL){

	}
	else if(tail!=NULL && tail1==NULL){

	}
	else{
	int sum=tail->data + tail1->data;
	if(sum>9){
		insertatfront(sumhead,sumtail,sum%10);
		sumofll(tail->prev , tail1->prev)+1;
	}else{
		insertatfront(sumhead,sumtail,sum);
	sumofll(tail->prev , tail1->prev);
	}
	}
	return sumhead;
}
void printll(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main () {
	int N;
	int M;
	cin>>N;
	cin>>M;

	node*head=NULL;
	node*tail=NULL;
	int d1;
	for(int i=0;i<N;i++){
		cin>>d1;
		insertattail(head,tail,d1);
	}
	node*head1=NULL;
	node*tail1=NULL;
	int d2;
	for(int i=0;i<M;i++){
		cin>>d2;
		insertattail(head1,tail1,d2);
	}
	node*ans=sumofll(tail,tail1);
    printll(ans);
	return 0;
}