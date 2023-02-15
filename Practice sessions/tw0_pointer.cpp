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
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bs(arr,n);
    int target;
    cin>>target;

    int low=0;
    int high= (sizeof(arr)/ sizeof(int))-1;
    for(int i=0;i<n;i++){
        if(arr[low]+arr[high]>target){
            high--;
        }
        else if(arr[low]+arr[high]<target){
            low++;
        }
        else if(arr[low]+arr[high]==target){
            cout<<arr[low]<<" "<<arr[high]<<endl;
            break;
        }
    }

    return 0;
}
