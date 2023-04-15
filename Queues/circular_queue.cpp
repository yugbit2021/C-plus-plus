#include<iostream>
using namespace std;

class Queue{
    int *arr;
    int cs;
    int ts;
    int s;
    int e;

    public: 

    Queue(int size=5){
        arr=new int[size];
        ts=size;
        s=0;
        cs=0;
        e=-1;
    }
    //push
    void push(int d){
        if(cs<ts){
            e=(e+1)%ts;
            arr[e]=d;
            cs++;
        }
        else{
            cout<<"overflow"<<endl;
        }
    }
    void pop(){
        if(cs>0){
            s=(s+1)%ts;
            cs--;
        }
        else{
            cout<<"under flow"<<endl;
        }
    }
    int front(){
        return arr[s];
    }

    bool empty(){
        return cs==0;
    }
    int size(){
        return cs;
    }
};

int main(){
    Queue q;
    q.push(4);
    q.push(1);
    q.push(6);
    q.push(4);
    q.push(1);
    q.pop();
    q.push(6);

    while(!q.empty()){
        cout<<q.front()<<" ";
    q.pop();
    }
    return 0;
}