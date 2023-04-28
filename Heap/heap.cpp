#include<iostream>
#include<vector>
using namespace std;

class Minheap{
    vector<int> v;
public: 
    Minheap(){
        v.push_back(-1);
    }

    //insert---> push
    void insert(int data){
        v.push_back(data);
        int child=v.size()-1;
        while(child!=1){
            int parent=child/2;
            if(v[parent]>v[child]){
                swap(v[parent],v[child]);
            }
            child=parent;
        }
    }

    void heapify(int index){//1 2 5
        int li=2*index;//2 4 10
        int ri=2*index*1;//3 5 11
        int minindex=index; //1 2

        if(li<=v.size()-1 && v[minindex]>v[li]){
            minindex=li;
        }
        if(li<=v.size()-1 && v[minindex]>v[ri]){
            minindex=ri;
        }
        if(minindex!=index){
            swap(v[minindex],v[index]);
        heapify(minindex);//2 5
        }
        
    }

    //delete-->pop
   void  delete(){
        swap(v[1],v[v.size()-1]);
        v.pop_back();
        heapify(1);
    }

   int top(){
    return v[1];
    }

   bool empty(){
    return v.size()==1;
    }

  int  size(){
        return v.size()-1;
    }
};



int main(){
    Minheap h;
    h.insert(1);
    h.insert(13);
    h.insert(3);
    h.insert(11);
    h.insert(12);
    h.insert(3);

    h.insert(0);
    cout<<h.top()<<endl;
    return 0;
}
