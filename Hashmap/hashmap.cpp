#include<iostream>
using namespace std;

class node{
    public:
    string k;
    string v;
    node*next;

    node(string key,string val){
        k=key;
        v=val;
        next=NULL;
    }
};

class hashmap{
    node**arr;
    int ts;//totalsize
    int cs;//currentsize
public:    
    hashmap(int size){
        arr=new node*[size];
        cs=0;
        ts=size;
        for(int i=0;i<size;i++){
            arr[i]=NULL;
        }
    }

    int hashfunction(string key){
        int ans=0;
        int mult=1;
        for(int i=0;i<key.length();i++){
            ans=((ans%ts+key[0]%ts*mult%ts)%ts)%ts;
            mult=(mult*29)%ts;
        }
        return ans;
    }

    void rehashing(){
        node**oldarr=arr;
        int oldts=ts;

       arr= new node*[ts*2];
       ts=2*ts;
       cs=0;
       for(int i=0;i<ts;i++){
        arr[i]=NULL;
       }

       //copy oldarr se elemenys ko arr mai
       for(int i=0;i<oldts;i++){
       node*head=oldarr[i];
       while(head!=NULL){
        insert(head->k,head->v);
       head=head->next;
       }
       }
    }

    //insert 
    void insert(string key,string val){
        int index=hashfunction(key);
        node*n=new node(key,val);
        //insert at front
        n->next=arr[index];
        arr[index]=n;
        cs++;
        if(cs/(ts*1.0)>=0.5){
            rehashing();
        }
    }

   void print(){
       for(int i=0;i<ts;i++){
       cout<<i<<" : ";
       node*head=arr[i];
       while(head!=NULL){
        cout<<"( "<<head->k<<", "<<head->v<<"),";
        head=head->next;
       }
       cout<<endl;
    }}

    bool search(string key){
        int index=hashfunction(key);
        node*head=arr[index];
        while(head!=NULL){
            if(head->k==key){
                return true;
            }
            head=head->next;
        }
        return false;
    }
};


int main(){
    hashmap h(7);
    h.insert("abc","red");
    h.insert("lma","blue");
    h.insert("pwr","green");
    h.insert("cba","voilet");
    h.insert("xhy","yellow");

    h.print();

   if( h.search("pwr")==true){
    cout<<"Key is present"<<endl;
   }else{
    cout<<"Not present"<<endl;
   }
}