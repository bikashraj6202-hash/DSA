class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int sum=0;
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        if(grid[0][0]>k){
            return 0;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(j>0) grid[i][j]+=grid[i][j-1];
                }
            }
            for(int j=0;j<m;j++){
                int sum=0;
                for(int i=0;i<n;i++){
                    sum+=grid[i][j];
                    if(sum<=k){
                        count++;
                    }else{
                        break;
                    }
                }
            }
            return count;
    }
};