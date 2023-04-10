#include<iostream>
#include<string.h>
using namespace std;
string arr[]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void phonekeypad(string inp,int i,string out){
    if(inp[i]=='\0'){
        cout<<out<<endl;
        return;
    }


    char ch=inp[i];//"2"
    int indx=ch-'0';//'2'-'0'=2

    for(int l=0;arr[indx][l]!='\0';l++){
        //out[j]=arr[indx][l];
        out=out+arr[indx][l];
        phonekeypad(inp,i+1,out);
        out.pop_back(); // backtracking
    }
    
}

int main(){
    //string inp;
    string inp;
    string out="";
    cin>>inp; // "23"

    phonekeypad(inp,0,out);
    return 0;
}