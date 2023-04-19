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
    if(x.isbal==true && y.isbal==true && abs(x.height-y.height)<1){
        l.isbal=true;
    }else{
        l.isbal=false;
    }
    return l;
}
int arr[]={1,2,3,4,5,6,7,8};
node*buildbstusingarr(int s,int e){
    //base case
    if(s>e){
        return NULL;
    }
    //rec case
    int mid=(s+e)/2;
    node*root=new node(arr[mid]);
    root->left=buildbstusingarr(s,mid-1);
    root->right=buildbstusingarr(mid+1,e);
    return root;

}
void preorder(node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

int main(){
node*root = buildtress();
int n=sizeof(arr)/sizeof(int);
buildbstusingarr(0,n-1);
preorder(root);
// if(checkbst(root)==true){
//     cout<<"yes";
// }
// else{
//     cout<<"no ";
// }
// pia x = isbalance(root);
// if(x.isbal==true){
//     cout<<" balanced";
// }
// else{
//     cout<<" not";
// }
}