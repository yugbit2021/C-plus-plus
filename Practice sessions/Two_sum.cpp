//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int start=0;
        int end=numbers.size()-1;
        while ((start<end))
        {
            
            int sum=numbers[start]+numbers[end];
            if(sum==target){
                ans.push_back(start+1);
                ans.push_back(end+1);
                return ans;
            }
            if(sum<target){
                start++;
            }
            else if(sum>target){
                end--;
            }
        }

        return ans;
    }
};