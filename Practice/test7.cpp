//
// Created by Jugesh Kumar on 02-02-2023.
//
#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    int N;
    cin>>N;
    int k;
    cin>>k;
    int arr[N];
    int arr1[N];
    for(int i=0;i<T;i++){
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        int j=1;
        while (k>0){
            arr1[k-1]=arr[N-j];
            j++;
            k--;
        }
        int l=0;
        for(int i=j-1;i<N;i++){
            arr1[i]=arr[l];
            l++;
        }
        cout<<endl;
    }
    for(int i=0;i<N;i++){
        cout<<arr1[i];
    }
}