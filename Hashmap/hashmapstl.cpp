#include<iostream>
#include<unordered_map>
using namespace std;


int main(){
    unordered_map<string,string> h;
   
    h["abc"]="red";
    h["pqc"]="blue";
    h["rsc"]="green";
    h["dfc"]="red";

    for(auto x:h){
        cout<<x.first<<"--> ";//0
        cout<<x.second<<endl;
    }
}