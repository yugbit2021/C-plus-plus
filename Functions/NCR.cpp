
#include <iostream>
using namespace std;
int fact(int a){
    int ans=1;
    for(int i=a;i>0;i--){
        ans= ans * i;
    }
    return ans;
}
int ncr(int n ,int r){
    int ans= fact(n)/(fact(r)*fact(n-r));
    return ans;
}
int main(){
//    int n;
//    cin>>n;
//    int r;
//    cin>>r;
    cout<<ncr(5,3);
}

