#include<iostream>
using namespace std;
bool sorted(int arr[],int n){
    //base case
    if(n==1){
        return true;
    }

    //recursive case
    if(sorted(arr,n-1) && arr[n-2]<=arr[n-1]){
        return true;
    }
    return false;
}
int main(){
    int arr[]={3,4,6,9};
    int n=4;
    bool ans= sorted(arr,n);
    cout<<ans;
    return 0;
}