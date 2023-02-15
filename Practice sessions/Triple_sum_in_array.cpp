//
// Created by Jugesh Kumar on 15-02-2023.
//
#include <iostream>
using namespace std;

int main(){
    int arr[]={1,4,6,8,10,45};
    int len=sizeof(arr)/ sizeof(int);
    int X = 19;
    for(int i=0;i<len;i++){
        int first=arr[i];
       int temp= X - first;
        int low=i+1;
        int high= len-1;
        while(low<high){
            int sum=arr[low]+arr[high];
            if(sum==temp){
                cout << first << " " << arr[low] << " " << arr[high] << endl;
                break;
            }
            if(sum>temp){
                high--;
            }
            else if(sum<temp){
                low++;
            }
        }
    }

    return 0;
}
