class Solution {
public:
    int solve(int idx,vector<int>v,vector<int>&dp){
        if(idx==0){
            return v[0];
        }
            if(idx<0){
                return 0;
            }
            if(dp[idx]!=-1){
                return dp[idx];
            }
            int picked=v[idx]+ solve(idx-2,v,dp);
            int nopic=solve(idx-1,v,dp);
            dp[idx]=max(picked,nopic);
            return dp[idx];
    }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        vector<int>v1,v2;
        vector<int>dp1(n,-1);
        vector<int>dp2(n,-1);
        for(int i=0;i<n-1;i++){
            v1.push_back(nums[i]);
        }
        for(int i=1;i<n;i++){
            v2.push_back(nums[i]);
        }
        int idx=nums.size()-2;
       int a=solve(idx,v1,dp1); 
        idx=nums.size()-2;
       int b=solve(idx,v2,dp2);
       return max(a,b);
    }
};