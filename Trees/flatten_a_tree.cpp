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
class link{
    public:
    node*head;
    node*tail;
    link(){
        head=NULL;
        tail=NULL;
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
void preorder(node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}
link convertbstintoll(node*root){
    link l;
    if(root==NULL){
        return l;
    }

    if(root->left==NULL&&root->right==NULL){
l.head=root;
l.tail=root;
return l;
    }
    else if(root->left!=NULL && root->right==NULL){
link le=convertbstintoll(root->left);
le.tail->left=root;
l.head=le.head;
l.tail=le.tail;
return l;
    }
    else if(root->left==NULL && root->right!=NULL){
link ri=convertbstintoll(root->right);
root->left=ri.head;
l.head=root;
l.tail=ri.tail;
return l;
}
else{
     link le=convertbstintoll(root->left);
     link ri=convertbstintoll(root->right);
     le.tail->left=root;
     root->left=ri.head;
     l.head=le.head;
     l.tail=ri.tail;
     return l;
}
return l;
}
void printll(node*root){
    while(root->left!=NULL){
    cout<<root->data<<" ";
    root=root->left;
}
cout<<endl;
}
int main(){
    node*root=buildtress();
    // preorder(root);
    // cout<<endl;
    link l= convertbstintoll(root);
    printll(l.head);
}