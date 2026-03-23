class Solution {
public:
    //  int solve(int m,int n,vector<vector<int>>&dp ,vector<vector<int>>& obstacleGrid){
    //     if(m<0 || n<0)return 0;
    //      if(obstacleGrid[m][n]==1)return 0;
    //     if(m==0 || n==0)return 1;
    //     if(dp[m][n]!=-1)return dp[m][n];
    //     int left=solve(m-1,n,dp,obstacleGrid);
    //     int right=solve(m,n-1,dp,obstacleGrid);
    //     dp[m][n]= left+right;
    //     return dp[m][n];
    // }
    int solve(int m,int n,vector<vector<int>>&dp ,vector<vector<int>>& obstacleGrid){
        // dp[m][n];
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if( obstacleGrid[i][j]==1)dp[i][j]=0;
                else if(i==0  && j==0)dp[i][j]=1;
                else{
                int left=0;
                int right=0;
                if(i>0) left=dp[i-1][j];
                if(j>0) right=dp[i][j-1];
                dp[i][j]=right+left;
                }
            }
        }
        return dp[m][n];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        
         vector<vector<int>>dp(m,vector<int>(n,0));
        return solve(m-1,n-1,dp,obstacleGrid);
    }
};