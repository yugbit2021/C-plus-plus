#include<iostream>
using namespace std;
bool sorted(int arr[],int n){
    //base case
    if(n==1){
        return true;
    }

    //recursive case
    if(sorted(arr+1,n-1) && arr[0]<=arr[1]){
        return true;
    }
    return false;
}
int main(){
    int arr[]={3,4,6,9,1};
    int n=5;
    bool ans= sorted(arr,n);
    cout<<ans;
    return 0;
}