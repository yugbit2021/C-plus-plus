#include<iostream>
#include<math.h>
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
int main(){
    node*root=buildbst();
    noinrangek1tok2(root ,7 , 14);
}