#include<iostream>
#include<list>
using namespace std;

//travesal of a graph gives you tree = skew tree

//directed (travers in single direction )
//undirected (travers in both direction)

//weighted graph (path gives you some cost)
//unweighted graph (does't provids you any cost)

//complete graph = every vertices is connected to all vertices including itself
//Edges is O(N*N)

class graph{
    list<int>*l;
    int n;
public:
    graph(int N){
        n=N;
        l=new list<int>[N]; // array of size 5 will be formed where list is stored
    }

    void addedge(int u,int v,bool bidirectional=true){
        l[u].push_back(v);
        if(bidirectional==true){
            l[v].push_back(u);
        }
    }

    void print(){
        for(int i=0;i<n;i++){
        cout<<i<<" : ";
        for(auto x:l[i]){
            cout<<x<<" ";
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
    graph g(5);
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