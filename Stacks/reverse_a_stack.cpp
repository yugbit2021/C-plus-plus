#include<iostream>
#include<stack>
using namespace std;

void insertatbottom(stack<int>&s,int ele){
    //base case 
    if(s.empty()==true){
        s.push(ele);
        return;
    }

    //rec case
    int t=s.top();
    s.pop();
    insertatbottom(s,ele);
    s.push(t);
}
void reverse(stack<int> &s){
    //base case
    if(s.empty()){
        return;
    }

    //rec case
    int ele=s.top();
    s.pop();
    reverse(s);
    insertatbottom(s,ele);
}

int main(){
    stack<int> s;
    // s.push(4);
    // s.push(2);
    // s.push(3);
    int N;
	cin>>N;
	int d;
	for(int i=0;i<N;i++){
		cin>>d;
		s.push(d);

	}
    
    reverse(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}