#include<iostream>
using namespace std;
void ms(int arr[],int start,int end){
    //base case


    //rec case
    int mid=(start+(end-start))/2;
    ms(arr,start,mid);

}
int main(){
    int arr[]={3,1,2,7,6,8};
    int n=sizeof(arr)/sizeof(int);
    ms(arr,0,n-1);
    return 0;
}