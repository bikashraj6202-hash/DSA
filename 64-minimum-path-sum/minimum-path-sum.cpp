class Solution {
public:
    
//     int f(int m,int n,vector<vector<int>>& grid,vector<vector<int>>&dp){
//         // base case
//         // if(m<0 || n<0) return INT_MAX;
//         // if(m==0 && n==0)return grid[0][0];
//         // if(dp[m][n]!=-1)return dp[m][n];
//         // int left=f(m-1,n,grid,dp);
//         // int right=f(m,n-1,grid,dp);
//         // return  dp[m][n]=grid[m][n]+min(left,right);
//    ?
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        // vector<vector<int>>dp(m,vector<int>(n,-1));
        // return f(m-1,n-1,grid,dp);

        int dp[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int left=INT_MAX,right=INT_MAX;
                if(i==0 &&j==0)dp[i][j]=grid[i][j];
                else{
                if(i>0)left=dp[i-1][j];
                if(j>0)right=dp[i][j-1];
                dp[i][j]=grid[i][j]+min(left,right);
                }
            }
        }
        return dp[m-1][n-1];
    }
};