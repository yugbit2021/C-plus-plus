#include<iostream>
#include<list>
#include<queue>
#include<string>
#include<unordered_map>
using namespace std;
template<typename T>

class graph{
    unordered_map<T,list<pair<string,int>>> h;
public:
    void addedge(T u,T v,int dist,bool bidirectional=true){
        h[u].push_back(make_pair(v,dist));
        if(bidirectional==true){
            h[v].push_back(make_pair(u,dist));
        }
    }

    void print(){
        for(auto x:h){
            cout<<x.first<<" : ";
            for(auto p:x.second){
                cout<<"( "<<p.first<<','<<p.second<<" ), ";
            }
            cout<<endl;
        }
    }
};

int main(){
    graph<string> g;
    g.addedge("jaipur","amritsar",4);
    g.addedge("jaipur","delhi",2);
    g.addedge("jaipur","mumbai",8);
    g.addedge("agra","amritsar",1);
    g.addedge("agra","delhi",1);
    g.addedge("agra","bhopal",2);
    g.addedge("mumbai","bhopal",3);

    g.print();
}