#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;

    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
void levelwise(node*root){
	queue<node*> q;
	q.push(root);//8 NULL
	q.push(NULL);


// loop
	while(!q.empty()){
		node*x=q.front();//NULL
	q.pop();
	if(x==NULL){
		cout<<endl;
		if(!q.empty()){
			q.push(NULL);
		}
	}
	else{
		cout<<x->data<<" ";//8

	if(x->left!=NULL){
		q.push(x->left);
	}

	if(x->right!=NULL){
		q.push(x->right);
	}
	}
	}
}
int arr[]={1,2,3,4,5,6,7,8};
node* buildbstusingarr(int s,int e){
	// base case
	if(s>e){
		return NULL;
	}


	// rec case
	int mid=(s+e)/2;
	node*root=new node(arr[mid]);
	root->left=buildbstusingarr(s,mid-1);
	root->right=buildbstusingarr(mid+1,e);
	return root;
}


int main(){
	int n=sizeof(arr)/sizeof(int);
	node*root=buildbstusingarr(0,n-1);
	levelwise(root);

	 }
	
