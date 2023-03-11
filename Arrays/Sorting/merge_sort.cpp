#include<iostream>
using namespace std;
void mergetwosortedarray(int arr[],int start,int end){
    int temp[1000];
    int i=start;
    int mid=(start+end)/2;
    int j=mid+1;
    int k=start;
    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
        temp[k]=arr[i];
        i++;
        k++;
    }
    else{
        temp[k]=arr[j];
        j++;
        k++;
    }
    }
    while(i<=mid){
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=end){
        temp[k]=arr[j];
        j++;
        k++;
    }

    //temp ko copy karna arr wali array me
    for(int l=start;l<=end;l++){
        arr[l]=temp[l];
    }
    
}

void ms(int arr[],int start,int end){
    //base case
    if(start==end){
        return;
    }

    //rec case
    int mid=(start+end)/2;
    ms(arr,start,mid); // 4,2,1 === 1,2,4
    ms(arr,mid+1,end); //5,3 ==== 3,5
    mergetwosortedarray(arr,start,end); // 1,2,3,4,5

}
int main(){
    int arr[]={4,2,1,5,3};
    int n=sizeof(arr)/sizeof(int);
    ms(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}