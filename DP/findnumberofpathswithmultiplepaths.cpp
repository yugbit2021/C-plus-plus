#include<iostream>
#include<climits>
using namespace std;

int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    cout<<totalways(m,n)<<endl;

    int arr[100][100]={0};
    cout<<tdtotalways(m,n,arr)<<endl;

    cout<<bptotalways(m,n)<<endl;

}