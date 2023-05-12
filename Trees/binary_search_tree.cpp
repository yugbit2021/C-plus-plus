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
bool searchintree(node*root,int key){
    //base case
    if(root==NULL){
        return false;
    }

    //rec case
    if(root->data==key){
        true;
    }
    else if(key<root->data){
        return searchintree(root->left,key);
    }else{
        return searchintree(root->right,key);
    }
    return false;
}
node*insertinbst(node*root,int data){
    if(root==NULL){
        root=new node(data);
        return root;
    }else if(data>=root->data){
        root=insertinbst(root->right,data);
    }else{
        root=insertinbst(root->left,data);
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
int main(){
    node*root=buildbst();
    if(searchintree(root,17)==true){
        cout<<"key is present "<<endl;
    }
    else{
        cout<<"key is not present "<<endl;
    }
}