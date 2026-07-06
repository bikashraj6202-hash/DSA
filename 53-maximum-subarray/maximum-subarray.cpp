class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int n=nums.size();
    if(n==1)return nums[0];
    int b=nums[0];
    int c=nums[0];
    int ans1=nums[0];
    int ans2=nums[0];
    int ans=nums[0];
    int sum=nums[0];
    for(int i=1;i<n;i++){
        sum+=nums[i];
        c=min(nums[i]+c,nums[i]);
        b=max(nums[i]+b,nums[i]);
        ans1=max(b,ans1);
        ans2=max(c,ans1);
        ans=max(ans1,ans);;
    }
    return max(ans,sum-ans2);
    }
};