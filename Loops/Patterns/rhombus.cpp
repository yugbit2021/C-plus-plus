//        * * * * *
//       * * * * *
//     * * * * *
//   * * * * *
// * * * * *
#include<iostream>
using namespace std;
int main(){
    int trow;
    cin>>trow;
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
while(star<=trow){
    cout<<"* ";
    star++;
}
cout<<endl;
row++;
    }
    return 0;
}