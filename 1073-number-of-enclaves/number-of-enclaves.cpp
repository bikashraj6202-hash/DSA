class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || j==0||i==n-1 || j==m-1){
                if(grid[i][j]==1){
                    q.push({i,j});
                    vis[i][j]=1;
                }
            }
            }
        }
       
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
             int rdel[]={-1,0,1,0};
        int cdel[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nrow=r+rdel[i];
            int ncol=c+cdel[i];
            // condition check 
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m  && !vis[nrow][ncol] 
            && grid[nrow][ncol]==1){
                q.push({nrow, ncol});
                vis[nrow][ncol]=1;
            }
            }
        }
            int count=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(grid[i][j]==1 && !vis[i][j]){
                        count++;
                    }
                }
            }
        return count;
    
    }
};