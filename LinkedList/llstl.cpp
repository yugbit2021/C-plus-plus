#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;

    l.push_back(7);
    l.push_back(9);
    l.push_back(1);
    l.push_back(6);
    l.push_back(3);

    for(auto x:l){
        cout<<x<<" ";
    }
}