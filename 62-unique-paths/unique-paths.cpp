class Solution {
public:
    //  int solve(int m,int n,vector<vector<int>>&dp){
    //     //base case
    //     if(m<0 || n<0)return 0;
    //     if(m==0 && n==0){
    //         return 1;
    //     }
    //     if(dp[m][n]!=-1)return dp[m][n];
    //    dp[m][n]=solve(m-1,n,dp)+ solve(m,n-1,dp);
    
    //     return dp[m][n];
    // }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        // return solve(m-1,n-1,dp);

         dp[0][0]=1;
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i>0) dp[i][j] += dp[i-1][j];
                if(j>0) dp[i][j] += dp[i][j-1];
            }
         }
         return dp[m-1][n-1];
    }
};