#include<iostream>
using namespace std;
int main(){

    int totalRow;
    cin>>totalRow;
    
int row=1; //initilization
while(row<=totalRow){
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