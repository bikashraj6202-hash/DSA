class Solution {
public:
    
    vector<int> solve(vector<int>&nums){
        if(nums.size()==1){
            return nums;
        }
        vector<int>ans=nums;
        nums.clear();
        int n=ans.size();
        for(int i=1;i<n;i++){
            nums.push_back((ans[i-1]+ans[i])%10);
        }
        solve(nums);
        return nums;
    }
    int triangularSum(vector<int>& nums) {
        solve(nums);
        return nums[0];
    }
};