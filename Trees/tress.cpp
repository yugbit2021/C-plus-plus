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
node* buildtress(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    else{
    node*root=new node(d);

    root->left=buildtress();
    root->right=buildtress();
    return root;
}
}

// preorder  root LST RST
//inorder    LST root RST
//postorder   LST RST root


//pre-order
void preorder(node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}
//in-order
void inorder(node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
//post-order
void postorder(node*root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}

int countnode(node*root){
    //base case
    if(root==NULL){
        return 0;
    }
    

    //rec case
    return countnode(root->left)+countnode(root->right)+1;
}

int sumofnode(node*root){
    //base case
    if(root==NULL){
        return 0;
    }
    

    //rec case
    return sumofnode(root->left)+countnode(root->right)+root->data;
}


int main(){
   
   node*root=buildtress();
   cout<<"pre order is ";
   preorder(root);
   cout<<endl;
   cout<<"in order is ";
   inorder(root);
   cout<<endl;
   cout<<"post order is ";
   postorder(root);
   cout<<endl;
   cout<<" count of nodes are "<<countnode(root)<<endl;
   cout<<" sum of nodes are "<<sumofnode(root)<<endl;
   
}