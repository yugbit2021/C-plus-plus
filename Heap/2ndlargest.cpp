#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int, vector<int> , greater<int>> h;
    int count=1;
    int data;
    int n=5;
    int i=0;

    while(i<n){
        cin>>data;
        if(count<=2){
            h.push(data);
            count++;
        }
        else{
            if(data>h.top()){
                h.pop();
                h.push(data);
            }
        }
        i++;
    }
    cout<<h.top();
}