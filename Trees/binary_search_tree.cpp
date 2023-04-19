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

node*insertinbst(node*root,int data){
    if(root==NULL){
        root=new node(data);
        return root;
    }
    else if(data>root->data){
        //rst me insert kro
        root->right=insertinbst(root->right,data);
    }
    else{
        root->left=insertinbst(root->left,data);
    }
    return root;
}
void noinrangek1tok2(node*root,int k1,int k2){
    //base case
    if(root==NULL){
        return;
    }
    //rec case
    noinrangek1tok2(root->left,k1,k2);
    if(root->data>=k1 && root->data<=k2){
        cout<<root->data<<" ";
    }
    noinrangek1tok2(root->right,k1,k2);
}

node* buildbst(){
    node*root=NULL;
    int data;
    cin>>data;//8
    while(data!=-1){
        root=insertinbst(root,data);
    cin>>data;
    }
    return root;
}
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
bool searchintree(node*root,int key){
    //base case
    if(root==NULL){
        return false;
    }

    //rec case
    if(root->data==key){
        true;
    }
    else if(key<root->data){
        return searchintree(root->left,key);
    }else{
        return searchintree(root->right,key);
    }
    return false;
}
int main(){
    node*root=buildbst();
    // levelwise(root);
    // if(searchintree(root,17)==true){
    //     cout<<"key is present ";
    // }
    // else{
    //     cout<<"key is not present ";
    // }
    noinrangek1tok2(root ,7 , 14);
}