#include<iostream>
#include<list>
#include<queue>
#include<unordered_map>
using namespace std;
template<typename T>

class graph{
    unordered_map<T,list<T>> l;
public:
    void addedge(int u,int v,bool bidirectional=false){
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
        parent[src]=src;

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
   int board[40]={0};
   board[2] = 13;
   board[5] = 2;
   board[9] = 18;
   board[18] = 11;
   board[17]=-13;
   board[20] = -14;
   board[24] = -8;
   board[25] = 10;
   board[32] = -2;
   board[34] = -22;

   for(int si=0;si<=35;si++){//source index
   for(int dice=1;dice<=6;dice++){
        int di=si+dice+board[si+dice];//destination index;
         g.addedge(si,di);
   }
   }

   cout<<g.sssp(0,36)<<endl;

}