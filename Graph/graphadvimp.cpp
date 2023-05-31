#include<iostream>
#include<list>
#include<queue>
#include<unordered_map>
using namespace std;
template <typename T>

class graph{
    unordered_map<T , list<T>> h;
    public:
    void addedge(T u,T v,bool bidre=false){
        h[u].push_back(v);
        if(bidre==true){
            h[v].push_back(u);
        }
    }

    void print(){
        for(auto x:h){
            cout<<x.first<<" : ";
            for(auto p:x.second){
                cout<<p<<" ";
            }
            cout<<endl;
        }
    }
    void bfs(T src){
        queue<T> q;
        q.push(src);
        unordered_map<T,bool> visited; //koan kon queue me dl chuka h 
        visited[src]==true;

        while(!q.empty()){
            T x=q.front();
        q.pop();
        cout<<x<<" ";

        for(auto nei:h[x]){
            if(!visited[nei]){
                q.push(nei);
                visited[nei]=true;
               
            }
        }
        }
        
        
    }
      void mindistance(T src){
        queue<T> q;
        q.push(src);
        unordered_map<T,bool> visited; //koan kon queue me dl chuka h 
        visited[src]=true;

        unordered_map<T,int> distance;
        distance[src]=0;

        while(!q.empty()){
            T x=q.front();
        q.pop();
        for(auto nei:h[x]){
            if(!visited[nei]){
                q.push(nei);
                visited[nei]=true;
                distance[nei]=distance[x]+1;
            }
        }
        }
        cout<<endl;

        // distance map ko print krna h
        for(auto p:distance){
            cout<<"distance of "<<p.first<<" from "<<src<<" is "<<p.second<<endl;
        }
        
    }
    //single shortest path
     int sssp(T src,T des){
        queue<T> q;
        q.push(src);
        unordered_map<T,bool> visited; //koan kon queue me dl chuka h 
        visited[src]=true;

        unordered_map<T,int> distance;
        distance[src]=0;

        unordered_map<T,T> parent;
        parent[src]=src;

        while(!q.empty()){
            T x=q.front();//2
        q.pop();
        for(auto nei:h[x]){//1 3
            if(!visited[nei]){
                q.push(nei);
                visited[nei]=true;
                distance[nei]=distance[x]+1;
                parent[nei]=x;
            }
        }
        }

        T temp=des;
        while(temp!=src){
        cout<<temp<<"<--";
        temp=parent[temp];
        }
        cout<<temp<<endl;

        return distance[des];
    }

};

int main(){
//     graph<string> g;
//    g.addedge("trump","modi",true);
//    g.addedge("putin","trump",false);
//    g.addedge("putin","modi",false);
//    g.addedge("putin","pope",false);
//    g.addedge("modi","yogi",true);
//    g.addedge("yogi","prabhu",false);
//    g.addedge("pope","");


     graph<int> g;
    g.addedge(0,1,true);
    g.addedge(0,4,true);
    g.addedge(1,4,true);
    g.addedge(4,3,true);
    g.addedge(1,3,true);
    g.addedge(1,2,true);
    g.addedge(2,3,true);
    
    
    

    // g.print();

   // g.bfs(2);
   //g.mindistance(0);
   cout<<g.sssp(2,0);

    //I want adjacent of 3
   // g.search(3);
}