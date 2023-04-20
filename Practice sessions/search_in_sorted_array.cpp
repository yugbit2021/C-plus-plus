//https://leetcode.com/problems/search-in-rotated-sorted-array/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo=0;
        int hi=nums.end();
        

        while(lo<hi){
            int mid=(hi+lo)/2;
            if(nums[mid]>target &&){
                lo=mid+1;
            }
            else if(nums[mid]<target){

            }
        }
    }
};