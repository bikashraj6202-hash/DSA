class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mini=nums[0];;
        int n=nums.size();
        int ans=-1;
        for(int j=1;j<n;j++){
            if(mini>nums[j]){
                mini=nums[j];
            }
            else if (nums[j]>mini){
                ans=max(ans,nums[j]-mini);
            }
        }
        return ans;
       
    }
};