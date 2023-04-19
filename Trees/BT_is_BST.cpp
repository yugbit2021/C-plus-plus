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
bool checkbst(node*root,int min=INT_MIN ,int max=INT_MAX){
    if(root==NULL){
        return true;
    }

    if(root->data>=min && root->data<=max && checkbst(root->left,min,root->data)&& checkbst(root->right,root->data,max )){
        return false;
    }
    return false;

}
int main(){
node*root = buildtress();
if(checkbst(root)==true){
    cout<<"yes";
}
else{
    cout<<"no ";
}
}