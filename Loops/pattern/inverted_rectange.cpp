//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *
#include<iostream>
using namespace std;
int main(){
    int trow=6;
    //cin>>trow;
    int row=1;
    while(row<=trow){
        //spaces
        int sp=1;
        while(sp<=trow-row){
            cout<<"  ";
            sp++;
        }
        //stars
        int star=1;
        while(star<=2*row-1){
            cout<<"* ";
            star++;
        }
        cout<<endl;
        row++;
    }
    //lower-half
    int rowno=2;
while(rowno<=trow){
    int spc=1;
    while(spc<=rowno-1){
        cout<<"  ";
        spc++;
    }
    int star=1;
    while(star<=(2*(trow-rowno)+1)){
        cout<<"* ";
        star++;
    }
    cout<<endl;
rowno++;
}
    return 0;
}