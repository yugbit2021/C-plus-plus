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
node*buildbst(){
    node*root=NULL;
    int data;
    cin>>data;

    while(data!=-1){
        root=insertinbst(root,data);
        cin>>data;
    }
    return root;
}

node* deletioninbst(node*root,int key){
	// base case
	if(root==NULL){
		return NULL;

	}


	// rec case
	// key lie in lst
	if(key<root->data){
		root->left=deletioninbst(root->left,key);
		return root;
	}
	// key lie rst
	else if(key>root->data){
		root->right=deletioninbst(root->right,key);
		return root;
	}

	// key is at root node 
	else{
		// root ka lst and rst doesn;t exist
		if(root->left==NULL and root->right==NULL){
			delete root;
			root=NULL;
			return root;
		}
		// case 2:  root ka lst exist and rst doesn;t exist
		else if(root->left!=NULL and root->right==NULL){
			node*temp=root->left;
			delete root;
			root=NULL;
			return temp;
		}

		// case 3:  root ka lst exist and rst doesn;t exist
		else if(root->left==NULL and root->right!=NULL){
			node*temp=root->right;
			delete root;
			root=NULL;
			return temp;

		}
		else{
			// nboth lst and rst exist
			// // i am choosing max of lst as root
			node*temp=root->left;

			while(temp->right!=NULL){
				temp=temp->right;

			}
			swap(root->data,temp->data);
			// delete temp;
			root->left=deletioninbst(root->left,key);
			return root;

			// i am choosing min of rst as root
			// node*temp=root->right;

			// while(temp->left!=NULL){
			// 	temp=temp->left;

			// }
			// swap(root->data,temp->data);
			// // delete temp;
			// root->right=deletioninbst(root->right,key);
			// return root;

		}
	}
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
int main(){
    node*root=buildbst();
    deletioninbst(root,8);
	levelwise(root);

}