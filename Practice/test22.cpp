#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int maxofthree(queue<int> v){
    priority_queue<int, vector<int> , greater<int>> h;
    int count =1;
    int i=0;
    while(i<=v.size()){
        if(count<=1){
            h.push(v.front());
            count++;
        }else{
            v.pop();
            if(v.front()>h.top()){
                h.pop();
                h.push(v.front());
            }
        }
        i++;
    }
    return h.top();
}

int main(){
    
    vector<int> v={4,1,3,5,1,2,3,2,1,1,5};

    queue<int> q;
    for(int i=0;i<3;i++){
        q.push(v[i]);
    }
    cout<<maxofthree(q)<<" ";

    int j=3;
    while(j<v.size()){
        q.pop();
        q.push(v[j]);
        j++;
        cout<<maxofthree(q)<<" ";
    }
    

   

}