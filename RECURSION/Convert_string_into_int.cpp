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

int main(){
    int n;
    cin>>n;
    reversewordprint(n);

    return 0;
}