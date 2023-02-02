#include <iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(isupper(ch)){
        cout<<"UPPERCASE"<<endl;
    }
    else if(islower(ch)){
        cout<<"LOWERCASE"<<endl;
    }
    else{
        cout<<"SOMETHING ELSE";
    }
    return 0;
}