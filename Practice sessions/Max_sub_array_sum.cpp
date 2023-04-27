#include<iostream>
using namespace std;

int max_sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
         int maxi=arr[0];
    maxi=max(sum,maxi);
    if(sum<0){
       sum=0;
    }
    }
   return sum;
}

int main(){
    int arr[]={5,4,-1,7,8};
    cout<<max_sum(arr,5);
    return 0;
}