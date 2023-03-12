#include<iostream>
using namespace std;
void subsequences(char inp[100],int i,char out[100],int j){
    //base case
    if(inp[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }

    //rec case
    out[j]=inp[i];
    subsequences(inp,i+1,out,j+1);

    //without a
    subsequences(inp,i+1,out,j);
}

int main(){
    char inp[100]="abc";
    char out[100];
    //cin>>inp; //"abc"
    subsequences(inp,0,out,0);
    return 0;
}