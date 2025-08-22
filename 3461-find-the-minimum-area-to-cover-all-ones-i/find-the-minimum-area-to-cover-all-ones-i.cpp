class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n1=grid.size();
        int n2=grid[0].size();
        int imin=INT_MAX,jmin=INT_MAX;
        int imax=INT_MIN ,jmax=INT_MIN;
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(grid[i][j]==1){
                    jmin=min(jmin,j);
                    jmax=max(jmax,j);
                     imin=min(imin,i);
                     imax=max(imax,i);
                }
            }
           
        }
        int height=(abs(imax-imin+1));
        int breath=(abs(jmax-jmin+1));
        return breath*height;
    }
};