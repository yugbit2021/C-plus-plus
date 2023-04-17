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
class p{
    public:
    int height;
    int dia;
    p(){
        height=0;
        dia=0;
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
   // option 1 left side check kro
    int op1=diameter(root->left);
    int op2=diameter(root->right);
    int op3=heightoftree(root->left)+heightoftree(root->right);
    return max(op1,max(op2,op3));
}

p fastdiameter(node*root){
    p n;
    //base case
    if(root==NULL){
        return n;
    }

    p x=fastdiameter(root->left);
    p y=fastdiameter(root->right);

    n.height = max(x.height,y.height)+1;

    //n ka diameter 
    int op1= x.dia;
    int op2=y.dia;
    int op3=x.height + y.height;

    n.dia=max(op1,max(op2,op3));
    return n;
}

int main(){
    node*root=buildtress();
    cout<<diameter(root)<<endl;
     p a=fastdiameter(root);

	cout<<"height is "<<a.height<<endl;
	cout<<"dia is "<<a.dia<<endl;
    return 0;
}