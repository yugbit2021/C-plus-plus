#include<iostream>
#include<vector>
using namespace std;
template<typename U>

class stack{
    vector<U> v;
    public:

    void push(U d){
        v.push_back(d);
    }

    void pop(){
        v.pop_back();
    }
    U size(){
        return v.size();
    }
    U top(){
        return v[v.size()-1];
    }
    bool empty(){
        return v.size()==0;
    }
};