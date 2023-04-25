#include<iostream>
using namespace std;

int stringtoint(string s,int l){//"639"
    //base case
    if(l==0){
        return 0;
    }

    //rec case
    char ch=s[l-1]; //"9"
    int ele=ch-'0'; //'9' - '0' ==9

    return stringtoint(s,l-1)*10+ele;//"63" 
}

int main(){
    string s;
    cin>>s;
    int l=s.length();
    cout<<stringtoint(s,l);
}