#include<iostream>
using namespace std;
int count =0;
void subsequences(char inp[1000],int i,char out[1000],int j){
    //base case
    if(inp[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;//abc
        count++;
        return ;
    }

    //rec case
    //with a
    out[j]=inp[i];
    subsequences(inp,i+1,out,j+1);


    //without a
    subsequences(inp,i+1,out,j);
}

int main(){
    char inp[1000];
    char out[1000];
    cin>>inp;
    subsequences(inp,0,out,0);
    cout<<count;
}