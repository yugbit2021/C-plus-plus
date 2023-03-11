#include<iostream>
using namespace std;
void mergetwosortedarray(int arr1[],int n,int arr2[],int m){
    int temp[1000];
    int i=0;
    int j=0;
    int k=0;
    while(i<=n-1 && j<=m-1){

        if(arr1[i]<arr2[j]){
        temp[k]=arr1[i];
        i++;
        k++;
    }
    else{
        temp[k]=arr2[j];
        j++;
        k++;
    }
    }
    while(i<=n-1){
        temp[k]=arr1[i];
        i++;
        k++;
    }
    while(j<=m-1){
        temp[k]=arr2[j];
        j++;
        k++;
    }

    for(int l=0;l<m+n;l++){
        cout<<temp[l]<<" ";
    }
    
}


int main(){
    int arr1[5]={2,4,6,6,8};
    int n=sizeof(arr1)/sizeof(int);
    int arr2[4]={1,3,5,5};
    int m=sizeof(arr2)/sizeof(int);

    mergetwosortedarray(arr1,n,arr2,m);

    return 0;
}