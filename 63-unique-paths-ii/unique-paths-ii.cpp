class Solution {
public:
    
    int solve(int m ,int n,vector<vector<int>>& ob,vector<vector<int>>&dp){
        if(m<0 || n<0 || ob[m][n]==1)return 0;
        if(dp[m][n]!=-1)return dp[m][n];
        if(m==0 && n==0)return 1;
        // int left=solve(m-1,n,ob);
        // int right=solve(m,n-1,ob);
        dp[m][n]=solve(m-1,n,ob,dp)+solve(m,n-1,ob,dp);
        return dp[m][n];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& ob) {
        int m=ob.size();
        int n=ob[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return solve(m-1,n-1,ob,dp);
    }
};