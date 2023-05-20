#include<iostream>
using namespace std;

//maximum he can jump 3 steps
int nstairs(int n){
    //base case
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    //rec case
    return nstairs(n-1)+nstairs(n-2)+nstairs(n-3);
}

int main(){
    cout<<nstairs(5);
}