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
void rightview(node*root,int cl,int &mlptn){// max level print till now (mlptn) , current level cl
if(root==NULL){
    return;
}
if(mlptn<cl){
 cout<<root->data<<" ";
    mlptn++;
}
   

    rightview(root->right,cl+1,mlptn);
    rightview(root->left,cl+1,mlptn);
}

int main(){
     node*root=buildbst();
     int k=0;
     rightview(root,1,k);
}