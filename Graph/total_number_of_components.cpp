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

   void dfs(T src,unordered_map<T,bool> &visited){
        //cout<<src<<" ";//2
        visited[src]=true;
        for(auto x:l[src]){//1 3
            if(! visited[x]){
                dfs(x,visited);
            }
        }

    }

   int totalcomponents(T src,unordered_map<T,bool> &visited){
        int comp=1;
        dfs(src,visited);
        for(auto x:l){
            if(! visited[x.first]){
                comp++;
                dfs(x.first,visited);
            }
        }
        return comp;
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

    //2nd component
    g.addedge(11,12);
    g.addedge(11,13);
    g.addedge(12,13);

    //3rd component
    g.addedge(100,101);
    g.addedge(100,102);

    unordered_map<int,bool> visited;
    cout<<g.totalcomponents(2,visited);
}