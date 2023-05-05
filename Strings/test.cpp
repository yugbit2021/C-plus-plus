#include<iostream>
#include<string>
using namespace std;

int main(){
    // string is a char array terminated by null
    // string s="hello";

//     string s;
//     // cin>>s;//hello world ---> hello (space ke baad input nahi lega)
//    // getline(cin,stringname);
//    getline(cin,s);

// string s1="pen";
// string s2="dog";

//If I want to append + 
//cout<<s1+s2<<endl;

//compare by ascii value 
// string s1="penb";
// string s2="pena";
// if(s1>s2){
//     cout<<"s1 is greatar";
// }else{
//     cout<<"s2 is greater";
// }

//substring (continous part of string)

// string s="Elephant";
// //cout<<s.substr(2)<<endl;// ephant
// //substr(index,no of char)
// cout<<s.substr(2,4); // epha

//push_back (works for single character)
string s="penci";
s.push_back('l');
cout<<s<<endl; //pencil

s.pop_back();
cout<<s<<endl;




    return 0;
}