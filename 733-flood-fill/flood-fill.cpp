class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        int initial=image[sr][sc];
        if(initial==color)return image;
        queue<pair<int,int> >q;
        vector<vector<int>>ans=image;
        ans[sr][sc]=color;
        q.push({sr,sc});
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=r+drow[i];
                int ncol=c+dcol[i];
                if(  nrow>=0 && ncol>=0 && nrow<n && ncol<m){
                    if(ans[nrow][ncol]==initial){
                    q.push({nrow,ncol});
                    ans[nrow][ncol]=color;
                    }
                }
            }

        }
        return ans;
    }
};