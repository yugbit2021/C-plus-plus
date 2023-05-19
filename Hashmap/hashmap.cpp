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
    int ts;
    int cs;
    public:
    hashmap(int s=7){
        arr=new node*[s];
        int cs=0;
        ts=s;

        for(int i=0;i<s;i++){
            arr[i]=NULL;
        }
    }

    int hashfunction(string key){
        int ans=0;
        int mult=1;

       for (int i=0;i<key.length();i++){
        ans=(ans%ts+(key[0]%ts+mult%ts)%ts)%ts;
        mult=(mult*29)%ts;  
    }
    return ans;
    
    }

    //rehashing

    void rehashing(){
        node**oldarr=arr;
        int oldts=ts;
       arr= new node*[ts*2];
       ts=2*ts;

       for(int i=0;i<ts;i++){
        arr[i]=NULL;
       }

       cs=0;

       //copy kro oldarr ke elements ko in new arr
       for(int i=0;i<oldts;i++){
       node*head=oldarr[i];//1600

       while(head!=NULL){
       insert(head->k,head->v);
       head=head->next;
    }
    }

    }

    //insert
    void insert(string ke,string vl){
        int index=hashfunction(ke);
        node*n=new node(ke,vl);
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
    }
    }

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
hashmap h;
h.insert("abc","Blue");
h.insert("bac","Green");
h.insert("dqc","Green");
h.insert("bda","Red");

h.print();
cout<<endl;
if(h.search("bqc")==true){
    cout<<"key is present";
}


}