//
// Created by Jugesh Kumar on 15-02-2023.
//
#include <iostream>
using namespace std;
void bs(int arr[],int size){
    for(int i=0;i<size-1;i++){
        bool isSwap= false;
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap= true;
            }
        }
        if(isSwap== false){
            break;
        }
    }
}
int bubble(int arr[],int size,int X){
    for(int i=0;i<size;i++){
        int first=arr[i];
        int temp= X - first;
        int low=i+1;
        int high= size-1;
        while(low<high){
            int sum=arr[low]+arr[high];
            if(sum==temp){
                cout<<first<<" "<<arr[low]<<" "<<arr[high];
                return 1;

            }
            if(sum>temp){
                high--;
            }
            else if(sum<temp){
                low++;
            }
        }
    }
    return size;
}
int main(){
    int arr[]={1,4,45,6,10,8};
    bs(arr,6);
    bubble(arr,6,50);

    return 0;
}
