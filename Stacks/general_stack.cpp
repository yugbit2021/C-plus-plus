// #include<iostream>
// #include<vector>
// using namespace std;
// template<typename U>

// class stack{
//     vector<U> v;
//     public:

//     void push(U d){
//         v.push_back(d);
//     }

//     void pop(){
//         v.pop_back();
//     }
//     U size(){
//         return v.size();
//     }
//     U top(){
//         return v[v.size()-1];
//     }
//     bool empty(){
//         return v.size()==0;
//     }
// };

#include"own_header_file.h"

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