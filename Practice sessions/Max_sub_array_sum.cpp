#include<iostream>
#include<climits>
using namespace std;

//kadane's algorithm

int max_sum(int arr[],int size){
    int max_so_far=INT_MIN;
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    if(max_so_far<sum){
        max_so_far=sum;
    }
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