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



void inorderTraversalRecurser(node *root, vector<int> &res)
{
    if (root == NULL)
    {
        return;
    }
    inorderTraversalHelper(root->left, res);
    res.push_back(root->data);
    inorderTraversalHelper(root->right, res);
}


vector<int> inorderTraversalRecursive(node *root)
{
    vector<int> res;
    inorderTraversalRecurser(root, res);
    return res;
}

int ino[]={1,10,4,6,7,8,3,13,14};//LST root RST
int preo[]={8,10,1,6,4,7,3,14,13};//root LST RST
int i=0;

node*buildtreeusinginpre(int s,int e){
    //base case
    if(s>e){
        return NULL;
    }
    int data=preo[i];//8
    i++;
    node*root=new node(data);

    int k;

    for(int j=s;j<=e;j++){
        if(ino[j]==data){
            k=j;
            break;
        }
    }
    root->left=buildtreeusinginpre(s,k-1);
    root->right=buildtreeusinginpre(k+1,e);
    return root;
}



void levelwise(node*root){
	queue<node*> q;
	q.push(root);//8 NULL
	q.push(NULL);


// loop
	while(!q.empty()){
		node*x=q.front();//NULL
	q.pop();
	if(x==NULL){
		cout<<endl;
		if(!q.empty()){
			q.push(NULL);
		}
	}
	else{
		cout<<x->data<<" ";//8

	if(x->left!=NULL){
		q.push(x->left);
	}

	if(x->right!=NULL){
		q.push(x->right);
	}
	}
	}
}

int main(){
    int n=sizeof(preo)/sizeof(int);
    node*root=buildtreeusinginpre(0,n-1);
    //levelwise(root);

    vector<int> ans=inorderTraversalRecursive(root);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    

    return 0;
}