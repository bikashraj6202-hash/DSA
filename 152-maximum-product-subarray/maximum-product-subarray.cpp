class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int n=nums.size();
       int bp=nums[0];
       int bn=nums[0];
       int ans=nums[0];
       for(int i=1;i<n;i++){
        int v1=nums[i]*bp;
        int v2=nums[i]*bn;
        int v=nums[i];
        bp=max(v1,max(v2,v));
        bn=min(v1,min(v2,v));
        ans=max(ans,max(bp,bn));
       }
       return ans;
    }
};