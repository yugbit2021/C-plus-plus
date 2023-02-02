//
// Created by Jugesh Kumar on 01-02-2023.
//
#include<iostream>
using namespace std;
int main(){
    int trow=7;
    //cin>>trow;
    int row=1;
    while(row<=trow){
        int sp=1;
        while(sp<=trow-row){
            cout<<"  ";
            sp++;
        }
        int i=0;
        int condition=(2*row)-1;

        while(i<1+(row-1)*2){
            int  print=row+i;
            if(print<=condition){
                cout<<print<<" ";
                print=print+i;
            }

            else if(print>condition){
                cout<<condition-i+row-1<<" ";
            }

            i=i+1;
        }

        cout<<endl;
        row++;
    }
    return 0;
}