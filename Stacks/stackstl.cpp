#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<char> s;
    s.push('A');
    s.push('B');
    s.push('C');

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}