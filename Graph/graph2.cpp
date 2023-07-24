#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;
template<typename T>

class graph{
    unordered_map<T,list<T>> h;
public:
    void addedge(T u,T v,bool bidirectional=false){
        h[u].push_back(v);
        if(bidirectional==true){
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
};


int main(){

   graph<string> g;

   g.addedge("trump","modi",true);
   g.addedge("putin","trump",false);
   g.addedge("putin","modi",false);
   g.addedge("putin","pope",false);
   g.addedge("modi","yogi",true);
   g.addedge("yogi","prabhu",false);
   g.addedge("pope","",false);

   g.print();
}