//
// Created by Jugesh Kumar on 15-02-2023.
//
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
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
