#include<iostream>
using namespace std;

string arr[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

void reversewordprint(int n){
    //base case
    if(n==0){
        return;
    }
    //rec case
    int indx=n%10;
    cout<<arr[indx]<<" ";
    reversewordprint(n/10);
}

void wordprint(int n){
    //base case
    if(n==0){
        return;
    }
    //rec case
    wordprint(n/10);
    int indx=n%10;
    cout<<arr[indx]<<" ";
    
}

int main(){
    int n;
    cin>>n;
    reversewordprint(n);
    cout<<endl;
    wordprint(n);
    return 0;
}