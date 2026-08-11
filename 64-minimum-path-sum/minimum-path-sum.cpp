class Solution {
public:
    
    int solve(int m,int n,vector<vector<int>>& g,vector<vector<int>>& dp){
        if(m<0 || n<0)return 1e9;
        if(m==0 && n==0)return g[0][0];
        if(dp[m][n]!=-1)return dp[m][n];
        int left= g[m][n]+solve(m-1,n,g,dp);
        int right=g[m][n]+solve(m,n-1,g,dp);
        dp[m][n]=min(left,right);
        return dp[m][n];

    }
    int minPathSum(vector<vector<int>>& g) {
        int m=g.size();
        int n=g[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return solve(m-1,n-1,g,dp);
    }
};