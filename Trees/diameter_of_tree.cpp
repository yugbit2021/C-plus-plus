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
//pre-order
void preorder(node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}
int heightoftree(node*root){
    //base case
    if(root==NULL){
        return 0;
    }

    //rec case
    return max(heightoftree(root->left),heightoftree(root->right))+1;
}
// diameter of a tree
// max distance b/w any two nodes
int diameter(node*root){
    //base case
    if(root==NULL){
        return 0;
    }


    //rec case
    //option 1 left side check kro
    int op1=diameter(root->left);
    int op2=diameter(root->right);
    int op3=heightoftree(root->left)+heightoftree(root->right);
    return max(op1,max(op2,op3));
}

int main(){
    node*root=buildtress();
    cout<<diameter(root)<<endl;
    return 0;
}