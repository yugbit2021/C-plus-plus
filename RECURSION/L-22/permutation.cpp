#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void permutation(char inp[1000],int i){
    //base case
    if(inp[i]=='\0'){
        cout<<inp<<endl;
        return;
    }
    //rec case
    for(int j=i;inp[j]!='\0';j++){
           swap(inp[i],inp[j]);//swap
           permutation(inp,i+1); //abc acb
}
}
int main(){
    char inp[1000];
    cin>>inp;
    //char out[1000];
    permutation(inp,0);
}