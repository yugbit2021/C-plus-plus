//     *
//    **
//   ***
//  ****
// ***** 
#include<iostream>
using namespace std;
int main(){
int trow;
cin>>trow;
int row=1;
while(row<=trow){
    int sp=1;
while(sp<=trow-row){
cout<<"  ";
sp++;
}
int i=1;
while(i<=row){
    cout<<"* ";
    i=i+1;
}
cout<<endl;
row=row+1;

}

    return 0;
}