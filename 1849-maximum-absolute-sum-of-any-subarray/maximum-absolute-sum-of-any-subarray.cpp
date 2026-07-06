class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int bn=nums[0];
        int bs=nums[0];
        int v1=nums[0];
        int v2=nums[0];
        for(int i=1;i<n;i++){
            bs=max(nums[i],nums[i]+bs);
            bn=min(nums[i],nums[i]+bn);
            v1=max(bs,v1);
            v2=min(bn,v2);
        }
        return max(v1,abs(v2));
    }
};