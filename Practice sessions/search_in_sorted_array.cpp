//https://leetcode.com/problems/search-in-rotated-sorted-array/
#include<iostream>
using namespace std;

//     class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int lo=0;
//     int hi=nums.size()-1;

//     int ans=-1;

//     while(lo<=hi){
//         int mid=(lo+hi)/2;

//         if(nums[mid]==target){
//             ans=mid;
//             break;
//         }
//         if(nums[lo]<=nums[mid]){
//             if(nums[mid]>=target && nums[lo]<=target){
//                 hi=mid-1;
//             }
//         else{
//             lo=mid+1;
//         }}
//         else{
//             if(nums[mid]<=target && target<=nums[hi]){
//                 lo=mid+1;
//             }else{
//                 hi=mid-1;
//             }
//         }
//     }
//     return ans;
//     }
// };

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;

    int lo=0;
    int hi=n-1;

    int ans=-1;

    while(lo<=hi){
        int mid=(lo+hi)/2;

        if(arr[mid]==target){
            ans=mid;
            break;
        }
        if(arr[lo]<=arr[mid]){
            if(arr[mid]>=target && arr[lo]<=target){
                hi=mid-1;
            }
        else{
            lo=mid+1;
        }}
        else{
            if(arr[mid]<=target && target<=arr[hi]){
                lo=mid+1;
            }else{
                hi=mid-1;
            }
        }
    }
    cout<<ans;
}