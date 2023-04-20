#include<iostream>
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
bool checkbst(node*root,int min=INT_MIN,int max=INT_MAX){
	// base case
	if(root==NULL){
		return true;
	}

	// rec case
	if(root->data>=min and root->data<=max and checkbst(root->left,min,root->data) and checkbst(root->right,root->data+1,max)){
		return true;
	}
	return false;

}
deletioninbst(node*root,int key){
    //base case
    //rec case
    //key lie in lst
    if(key<root->data){

    }
    //key lie in rst
    else if(key>root->data){

    }
    //key is at node
    else{
        
    }
}
int main(){
    node*root=buildbst();

}