#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;
template<typename T>

//travesal of a graph gives you tree = skew tree

//directed (travers in single direction )
//undirected (travers in both direction)

//weighted graph (path gives you some cost)
//unweighted graph (does't provids you any cost)

//complete graph = every vertices is connected to all vertices including itself
//Edges is O(N*N)

class graph{
    unordered_map<T,list<T>> l;
public:
    // graph(int N){
    //     n=N;
    //     l=new list<int>[N]; // array of size 5 will be formed where list is stored
    // }

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

    search(int a){
        for(auto x:l[a]){
            cout<<x<<" ";

        }
        cout<<endl;
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
    
    g.print();

   // I want adjacent of 3
   // g.search(3);
}