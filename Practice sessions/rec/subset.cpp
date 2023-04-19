#include<iostream>
using namespace std;

void sub(char *inp,int i,char *out,int j){
    //base case
    if(inp[i]=='\0'){
        out[j]='\0';
        cout<<out<<" "<<endl;
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
    char inp[]="123";
    char out[10];
    sub(inp,0,out,0);
    return 0;
}