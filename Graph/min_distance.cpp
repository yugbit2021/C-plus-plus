//find min distance from given node
#include<iostream>
#include<list>
#include<queue>
#include<unordered_map>
using namespace std;
template<typename T>

class graph{
    unordered_map<T,list<T>> l;
public:
    void addedge(int u,int v,bool bidirectional=true){
        l[u].push_back(v);
        if(bidirectional==true){
            l[v].push_back(u);
        }
    }

    void print(){
        for(auto x:l){
            cout<<x.first<<" : ";
            for(auto y:x.second){
                cout<<y<<" ";
            }
            cout<<endl;
        }
    }

   void search(int a){
        for(auto x:l[a]){
            cout<<x<<" ";

        }
        cout<<endl;
    }

   void bfs(T src){
        queue<T> q;
        q.push(src);
        unordered_map<T,bool> visited; //kon kon queue me dal chuka hai
        visited[src]=true;

        unordered_map<T,int> distance;
        distance[src]=0;

        while(!q.empty()){
         T x = q.front();//2
        q.pop();
        cout<<x<<" ";//2
        for(auto nei:l[x]){//neighbour
        if(! visited[nei]){//1 3 
            q.push(nei);
            visited[nei]=true;
            distance[nei]=distance[x]+1;
           }
         }
     }
     cout<<endl;
     for(auto p:distance){
        cout<<"distance of "<<p.first<<" from "<<src<<" is "<<p.second<<endl;
     }
    }
};

int main(){
    graph<int> g;
    g.addedge(0,1);
    g.addedge(0,4);
    g.addedge(1,2);
    g.addedge(1,3);
    g.addedge(1,4);
    g.addedge(2,3);
    g.addedge(4,3);

    g.bfs(2);
}