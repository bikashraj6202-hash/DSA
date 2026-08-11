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
         if(nums.size()==1){
            return nums[0];
        }
        vector<int>v1;
        vector<int>v2;
        vector<int>dp1(nums.size()-1,-1);
         vector<int>dp2(nums.size()-1,-1);
         for(int i=0;i<nums.size()-1;i++){
            v1.push_back(nums[i]);
         }
           for(int i=1;i<nums.size();i++){
            v2.push_back(nums[i]);
         }
          int idx=nums.size()-2;
        int a= solve(idx,v1,dp1);
          idx=nums.size()-2;
        int b= solve(idx,v2,dp2);
        return max(a,b);
    }
};