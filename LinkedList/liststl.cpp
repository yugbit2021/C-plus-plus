#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;
    l.push_back(7);
    l.push_back(5);
    l.push_back(7);
    l.push_back(5);

    for(auto x:l){
        cout<<x<<" ";
    }
}