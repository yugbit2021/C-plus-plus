#include<iostream>
using namespace std;

int stringtooint(string s,int l){
    //base case
    if(l==0){
        return 0;
    }
    //recusive case
    char ch=s[l-1];
    int ele=ch-'0';
   return stringtooint(s,l-1)*10 + ele;
}

int main(){
    string s;
    cin>>s;
    int l=s.length();
    cout<<stringtooint(s,l);
    return 0;
}