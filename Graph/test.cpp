#include<iostream>
#include<list>
#include<queue>
#include<unordered_map>
using namespace std;
template <typename T>

class graph{
    unordered_map<T ,list<pair<string,int>>> h;
    public:
    void addedge(T u,T v,T dist,bool bidre=true){
        h[u].push_back(make_pair(v,dist));
        if(bidre==true){
            h[v].push_back(make_pair(u,dist));
        }
    }

    void print(){
        for(auto x:h){
            cout<<x.first<<" : ";
            for(auto p:x.second){
               cout<<"( "<<p.first<<" , "<<p.second<<"), ";
            }
            cout<<endl;
        }
    }
};

int main(){
    graph<string> g;
    g.addedge("jaipur","amritsar",4,true);
    g.addedge("jaipur","delhi",2,true);
    g.addedge("jaipur","mumbai",8,true);
    g.addedge("amritsar","agra",4,true);
    g.addedge("delhi","agra",2,true);
    g.addedge("bhopal","agra",2,true);
    g.addedge("bhopal","mumbai",3,true);
    
    g.print();
}