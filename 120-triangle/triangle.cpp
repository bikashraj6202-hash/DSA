class Solution {
public:
    // int solve(int i,int j,int n,vector<vector<int>>& t,vector<vector<int>>&p){
    //     //base cae
      
    //     if(p[i][j]!=-1)return t[i][j];
    //     if(i==n-1) return  t[i][j];
    //     int d=t[i][j]+solve(i+1,j,n,t,p);
    //     int dg=t[i][j]+solve(i+1,j+1,n,t,p);
    //     p[i][j]=min(d,dg);
    //     return p[i][j];
    // }
    
    int minimumTotal(vector<vector<int>>& t) {
        int n=t.size();
    //     vector<vector<int>>dp(n);
    //     for(int i=0;i<n;i++){
    //         dp[i].resize(t[i].size(),-1);
    //     }
    //     // return solve(0,0,n,t,p);
    //    for(int i=0;i<n;i++){
    //     dp[n-1][i]=t[n-1][i];
    //    }
    //    for(int i=n-2;i>=0;i--){
    //     for(int j=i;j>=0;j--){
    //         int p=t[i][j]+dp[i+1][j];
    //         int q=t[i][j]+dp[i+1][j+1];
    //         dp[i][j]=min(p,q);
    //     }
    //    }

    vector<int>curr(n);
    vector<int>pre(n);
    for(int i=0;i<n;i++){
        pre[i]=t[n-1][i];
    }
    for(int i=n-2;i>=0;i--){
        for(int j=i;j>=0;j--){
            int q=t[i][j]+pre[j+1];
            int p=t[i][j]+pre[j];
            curr[j]=min(q,p);
        }
        pre=curr;
    }
       return pre[0];
    }
};