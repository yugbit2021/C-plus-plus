// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
#include<iostream>
using namespace std;
int main(){
    int trow;
    cin>>trow;
    int row=1;
    int no=1;
    while(row<=trow){
        int i=1;
        while(i<=row){
            cout<<no<<" ";
            no++;
            i++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}