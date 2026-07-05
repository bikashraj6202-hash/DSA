class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int n=nums.size();
    int b=nums[0];
    int ans=nums[0];
    for(int i=1;i<n;i++){
        int v1=nums[i]+b;
        int v2=nums[i];
        b=max(v1,v2);
        ans=max(b,ans);
    }
    return ans;
    }
};