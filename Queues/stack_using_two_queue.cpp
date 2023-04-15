#include<iostream>
#include<queue>
using namespace std;

class stack{
    queue<int> q1;
    queue<int> q2;

    public:

    void push(int d){
        //agar dono empty hai koi v ek select kr lo
        if(q1.empty()==true && q2.empty()){
            q1.push(d);
        }
         else if(!q1.empty() && q2.empty()){
            q1.push(d);
        }
        else{
            q2.push(d);
        }
    }

   void  pop(){
          if(q1.empty() && q2.empty()){
            return;
          }
        if(!q1.empty() && q2.empty()){
            //shift until q1 ka size is 1
            while(q1.size()>1){
               q2.push(q1.front());
               q1.pop(); 
            }
            q1.pop();
        }
        else{
            while(q2.size()>1){
               q1.push(q2.front());
               q2.pop(); 
            }
            q2.pop();  
            }
        }
    int top(){
        if(q1.empty() && q2.empty()){
            return -1;
          }
        if(!q1.empty() && q2.empty()){
            //shift until q1 ka size is 1
            while(q1.size()>1){
               q2.push(q1.front());
               q1.pop(); 
            }
            int x= q1.front();
            q2.push(x);
            q1.pop();
            return x;
        }
        else{
            while(q2.size()>1){
               q1.push(q2.front());
               q2.pop(); 
            }
            int x=q2.front();
            q1.push(x);
            q2.pop();  
            return x;
            }
    } 

    int size(){
        return q1.size()+q2.size();
    }
    bool empty(){
        return q1.size()==0 && q2.size()==0;
    }   
};



int main(){
    stack s;
    s.push(4);
    s.push(2);
    s.push(3);
    s.push(7);

    s.pop();
    s.push(40);
    s.pop();

    while(!s.empty()){
        cout<<s.top()<<" ";
    s.pop();
    }
    return 0;
}

