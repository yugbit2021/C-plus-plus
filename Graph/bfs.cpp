#include<iostream>
#include<list>
#include<queue>
#include<unordered_map>
using namespace std;
template<typename T>

class graph{
    unordered_map<T,list<T>> l;
public:
    void addedge(T u,T v,bool bidirectional=true){
        l[u].push_back(v);
        if(bidirectional==true){
            l[v].push_back(u);
        }
    }

   void search(T a){
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

        while(!q.empty()){
         T x = q.front();//2
        q.pop();
        cout<<x<<" ";//2
        for(auto nei:l[x]){//neighbour
        if(! visited[nei]){//1 3 
            q.push(nei);
            visited[nei]=true;
           }
         }
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