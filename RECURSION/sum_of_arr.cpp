#include <iostream>
using namespace std;
int fun(int arr[],int n,int i){
    if(i==n){
        return 0;
    }
    return fun(arr,n,i+1)+arr[i];
}
int main(){
    int arr[]={1,2,3,4,5,6};
    cout<<fun(arr,6,0);
    return 0;
}