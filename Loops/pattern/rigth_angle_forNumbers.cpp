// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4 5 6
#include<iostream>
using namespace std;
int main(){
    int trow;
    cin>>trow;
    int row=1;
    while(row<=trow){
        int i=1;
        int stno=1;
        while(i<=row){
            cout<<stno<<" ";
            stno++;
            i++;
        }
        cout<<endl;
        row++;
    }
}