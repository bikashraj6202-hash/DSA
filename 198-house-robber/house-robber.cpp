class Solution {
public:
    // int solve(int idx,vector<int>&nums,vector<int>&dp){
    //     if(idx==0)return nums[idx];
    //     if(idx<0)return 0;
    //     if(dp[idx]!=-1)return dp[idx];
    //     int p=nums[idx]+solve(idx-2,nums,dp);
    //     int np=0+solve(idx-1,nums,dp);
    //     dp[idx]=max(p,np);
    //     return dp[idx];
    // }
    int rob(vector<int>& nums) {
        int n=nums.size();
        int dp[n];
        dp[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            int t=nums[i];
            if(i>1){
                t=nums[i]+dp[i-2];
            }
            int nt=0+dp[i-1];
            dp[i]=max(t,nt);
        }
        return dp[n-1];
    }
};