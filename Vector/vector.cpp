#include<iostream>
#include<vector>
using namespace std;

int main(){
    //vector<datatype> nameofvector;
    vector<int> v;
    //to insert elements in vector
   v.push_back(4);
   v.push_back(9);
   v.push_back(3);
   v.push_back(7);
   v.push_back(1);
   v.push_back(6);
   //if there is not any space then the size of vector will be double 

   // to print size
   //vectorname.size();
  cout<<v.size()<<endl;
   //capacity
   cout<<v.capacity()<<endl;

   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
   cout<<endl;
   v.pop_back();
   cout<<v.size()<<endl;
   //capacity decrese nhi hogi 
   cout<<v.capacity()<<endl;

   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
}