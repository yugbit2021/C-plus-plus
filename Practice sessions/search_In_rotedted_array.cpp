//https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int lo=0;
    int hi=nums.size()-1;

    

    while(lo<=hi){
        int mid=(lo+hi)/2;

        if(nums[mid]==target){
            return true;
            break;
        }
        if(nums[lo]<nums[mid]){
            if(nums[mid]>=target && nums[mid]<=target){
                hi=mid-1;
            }
        else{
            lo=mid+1;
        }
          }
        else if(nums[hi]>nums[mid]){
            if(nums[mid]<=target && target<=nums[hi]){
                lo=mid+1;
            }else{
                hi=mid-1;
            }
        }
        else{
            if(nums[mid]==nums[lo])lo++;
            if(nums[mid]==nums[hi])hi--;
        }
    }
    return false;
    }
};