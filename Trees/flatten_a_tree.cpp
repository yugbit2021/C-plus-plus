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

class link{
    public:
    node*head;
    node*tail;
    link(){
        head=NULL;
        tail=NULL;
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


link convertbstintoll(node*root){
    link l;
    if(root==NULL){
        return l;
    }
// neither lst nor rst exist
    if(root->left==NULL && root->right==NULL){
               l.head=root;
               l.tail=root;
//return l;
    }
    //only lst not rst
    else if(root->left!=NULL && root->right==NULL){
              link le=convertbstintoll(root->left);
              le.tail->left=root;
              root->left=NULL;
              l.head=le.head;
              l.tail=root;
    }
    //only rst not lst
    else if(root->left==NULL && root->right!=NULL){
           link ri=convertbstintoll(root->right);
           root->left=ri.head;
           l.head=root;
           l.tail=ri.tail;

}
//Both exists
else{
     link le=convertbstintoll(root->left);
     link ri=convertbstintoll(root->right);
     le.tail->left=root;
     root->left=ri.head;
     l.head=le.head;
     l.tail=ri.tail;
     //return l;
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
    node*root=buildbst();
    link l= convertbstintoll(root);
    printll(l.head);
}