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
class pia{
    public:
    bool isbal;
    int height;

    pia(){
        isbal=true;
        height=0;
    }
};
pia isbalance(node*root){
    pia l;
    //base case
    if(root==NULL){
        return l;
    }
    //rec case
    pia x=isbalance(root->left);
    pia y=isbalance(root->right);
    l.height=max(x.height,y.height)+1;
    if(x.isbal==true && y.isbal==true && abs(x.height-y.height)<=1){
        l.isbal=true;
    }else{
        l.isbal=false;
    }
    return l;
}
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
int main(){
    node*root=buildbst();
    pia x = isbalance(root);
    if(x.isbal==true){
            cout<<"yes  balanced tree"<<endl;
}
    else{
           cout<<"not balanced tree ";
}
}