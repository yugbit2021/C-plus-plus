class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size()-1;i++){
            int first=nums[i];
            int temp=0-first;
            int low=i+1;
        int high= nums.size()-1;
        vector<int> ans1;
        while(low<high){
            int sum=nums[low]+nums[high];
            if(sum==temp){
               ans1.push_back(temp);
               ans1.push_back(low);
               ans1.push_back(high);
            }
            if(sum>temp){
                high--;
            }
            else if(sum<temp){
                low++;
            }
        }
        ans.push_back(ans1);

    }
    return ans;
        }
};
