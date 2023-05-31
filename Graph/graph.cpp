#include<iostream>
#include<list>
using namespace std;

class graph{
    //int*arr=new int[N];
    list<int>*l;
    int n;
    public:

    graph(int N){
        n=N;
        l=new list<int>[N];
    }

    void addedge(int u,int v,bool bidre=true){
        l[u].push_back(v);

        if(bidre==true){
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
    }}

    void search(int a){
        for(auto x:l[a]){
            cout<<x<<" ";
        }
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

    //I want adjacent of 3
    //g.search(3);
}