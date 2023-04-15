#include<iostream>
#include<vector>
using namespace std;

class stack{
    vector<int> v;
    public:

    void push(int d){
        v.push_back(d);
    }

    void pop(){
        v.pop_back();
    }
    int size(){
        return v.size();
    }
    int top(){
        return v[v.size()-1];
    }
    bool empty(){
        // if(v.size()==0){
        //     return true;
        // }
        // return false;
        return v.size()==0;
    }
};

int main(){
    stack s;
    s.push(4);
    s.push(2);
    s.push(3);

    cout<<s.top()<<" "<<endl;
    return 0;
}