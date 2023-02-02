//
// Created by Jugesh Kumar on 01-02-2023.
//
#include <iostream>
using namespace std;
void update(int &x){
    x=x+10;
}

int main(){
    int tony=10;
    int &shaam=tony;
    tony=tony+1;
    cout<<tony<<endl;
    update(shaam);
    cout<<shaam<<endl;
    cout<<tony;
}
