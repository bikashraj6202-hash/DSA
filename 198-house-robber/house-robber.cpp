class Solution {
public:
    int solve(int idx,vector<int>&nums,vector<int>&dp){
        if(idx==0)return nums[idx];
        if(idx<0)return 0;
        if(dp[idx]!=-1)return dp[idx];
        int p=nums[idx]+solve(idx-2,nums,dp);
        int np=0+solve(idx-1,nums,dp);
        dp[idx]=max(p,np);
        return dp[idx];
    }
    int rob(vector<int>& nums) {
        int idx=nums.size()-1;
        vector<int>dp(idx+1,-1);
        return solve(idx,nums,dp);
    }
};