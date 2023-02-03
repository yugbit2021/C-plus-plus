//https://hack.codingblocks.com/app/contests/3858/571/problem
// Created by Jugesh Kumar on 03-02-2023.
//1           1
//1 2       2 1
//1 2 3   3 2 1
//1 2 3 4 3 2 1
#include <iostream>
using namespace std;
void print_row(int trow,int row){
    int col=2*trow-1;
    //numbers;
    for(int i=1;i<=row;i++){
        cout<<i<<" ";
    }
    //spaces
    int spaces=2*(trow-row)-1;
    if(spaces>0){
        for(int i=1;i<=spaces;i++){
            cout<<"  ";
        }
        for(int i=row;i>0;i--){
            cout<<i<<" ";
        }
    }
    else{
        for(int i=row-1;i>0;i--){
            cout<<i<<" ";
        }
    }

    //numbers


}
int main(){
    int trow=4;
    //cin>>trow;
    for(int i=1;i<=trow;i++){
        int row=i;
        print_row(trow,row);
        cout<<endl;
    }
    return 0;
}