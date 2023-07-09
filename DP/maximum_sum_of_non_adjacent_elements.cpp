#include<iostream>
#include<vector>
using namespace  std;

// int solve(vector<int> &nums , int n){
//     if(n<0){
//         return 0;
//     }
//     if(n==0){
//         return nums[0];
//     }
//     int incl=solve(nums,n-2)+nums[n];
//     int excl=solve(nums,n-1)+0;

//     return max(incl,excl);
// }

int solve(vector<int> &nums , int n,vector<int> &dp){
    if(n<0){
        return 0;
    }
    if(n==0){
        return nums[0];
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int incl=solve(nums,n-2,dp)+nums[n];
    int excl=solve(nums,n-1,dp)+0;

    return dp[n]=max(incl,excl);
   
}



int solve1(vector<int> &nums){
    int n=nums.size();
    int *dp=new int[n+1];

    dp[0]=nums[0];
    dp[1]=max(nums[1],nums[0]);

    for(int i=2;i<n;i++){
        int incl=dp[i-2]+nums[i];
        int exc=dp[i-1]+0;
        dp[i]=max(incl,exc);

    }
    return dp[n-1];
}

int maximumNonAdjacentsum(vector<int> &nums){
    // int n=nums.size();
    // //right to left
    // int ans=solve(nums,n-1);
    // return ans;

    // int n=nums.size();
    // vector<int> dp(n,-1);
    // return solve(nums,n-1,dp);

    return solve1(nums);
}
int main(){
    vector<int> v={9,9,8,2};
    cout<<maximumNonAdjacentsum(v);
}