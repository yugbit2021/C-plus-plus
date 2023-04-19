//https://hack.codingblocks.com/app/contests/3858/379/problem
#include<iostream>
using namespace std;

void sub(int *inp,int i,int *out,int j){
    //base case
    if(inp[i]==0){
        out[j]=0;
        cout<<out<<" ";
        //int sum=0;
        // for(int k=0;k<sizeof(out)/sizeof(int);k++){
        //     sum=sum+out[k];
        //     if(sum==target){
                
        //     }
        // }
        return;
    }

    //rec case
    //you are at ith index have to decide include or exclude
    //1 include
    out[j]=inp[i];
    sub(inp,i+1,out,j+1);

    //2 exclude
    sub(inp,i+1,out,j);
}

int main(){
    // int N;
    // cin>>N;
    int inp[5]={1,4,6,5,3};
    // for(int i=0;i<N;i++){
    //     cin>>inp[i];
    // }
    // int K;
    // cin>>K;
    int out[10];
    sub(inp,0,out,0);
    return 0;
}