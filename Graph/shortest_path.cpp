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
    
    //single source shortest path

    int sssp(T src,T des){
        queue<T> q;
        q.push(src);
        unordered_map<T,bool> visited; //kon kon queue me dal chuka hai
        visited[src]=true;

        unordered_map<T,int> distance;
        distance[src]=0;

        unordered_map<T,T> parent;

        while(!q.empty()){
         T x = q.front();//2
        q.pop();
        for(auto nei:l[x]){//neighbour
        if(! visited[nei]){//1 3 
            q.push(nei);
            visited[nei]=true;
            distance[nei]=distance[x]+1;
            parent[nei]=x;
           }
         }
     }

     T temp=des;
     while(temp!=src){
         cout<<temp<<" <-- ";//0
         temp=parent[temp];//1 2
     }
     cout<<temp<<endl;
    
    return distance[des];
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

    cout<<g.sssp(0,2);
}