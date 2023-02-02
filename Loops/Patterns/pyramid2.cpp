#include<iostream>
using namespace std;
int main(){
    int trow;
    cin>>trow;
int rowno=1;
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