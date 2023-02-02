//
// Created by Jugesh Kumar on 01-02-2023.
//
#include <iostream>
using namespace std;
void update(int x){
    x=x+10;
    cout<<"Inside update fun "<<x<<endl;
}
int main(){
    int x=30;
    cout<<x<<endl;
    update(x);
    cout<<"After update function "<<x;
    return 0;
}