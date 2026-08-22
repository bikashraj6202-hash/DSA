class Solution {
public:
    
   
    bool canPartition(vector<int>& nums) {
        int s=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            s+=nums[i];
        }
        if(s%2!=0)return false;
       
        vector<vector<int>>dp(n,vector<int>((s/2)+1,0));
        for(int i=0;i<n;i++){
            dp[i][0]=true;
        }
       if(nums[0] <= s/2){
    dp[0][nums[0]] = true;
}
        
        for(int i=1;i<n;i++){
            for(int j=1;j<=(s/2);j++){
                bool nt=dp[i-1][j];
                bool t=false;
                if(nums[i]<=j){
                    t=dp[i-1][j-nums[i]];
                }
                dp[i][j]=t ||nt;
            }

        }
        return dp[n-1][s/2];
    }
};