#include<iostream>
#include<list>
using namespace std;

class graph{
    //int*arr=new int[N];
    list<char>*l;
    int n;
    public:

    graph(int N){
        n=N;
        l=new list<char>[N];
    }

    void addedge(char u,char v,bool bidre=true){
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
    graph g(3);
   g.addedge('a','b');
   g.addedge('a','c');
   g.addedge('b','c');

    g.print();

    //I want adjacent of 3
    g.search(2);
}