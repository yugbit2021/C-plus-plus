#include<bits/stdc++.h>
#include<vector>
using namespace std;

    vector<vector<int>> threeSum(vector<int>& nums) {
        int target=0;
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            
            int low=i+1;
        int high= nums.size()-1;
        vector<int> ans1;
        while(low<high){
            int sum=nums[low]+nums[high]+nums[i];
            if(sum==target){
               ans1.push_back(nums[i]);
               ans1.push_back(nums[low]);
               ans1.push_back(nums[high]);
               low++;
               high--;
            }
            if(sum>target){
                high--;
            }
            else if(sum<target){
                low++;
       }
        }
        ans.push_back(ans1);

    }
    return ans;
        }

int main(){

    vector<int> x;
    x.push_back(-1);
    x.push_back(0);
    x.push_back(1);
    x.push_back(2);
    x.push_back(-1);
    x.push_back(4);

    vector<vector<int>> ans= threeSum(x);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
    }
}        
