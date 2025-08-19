class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int total=INT_MAX;
        int sum=0,end=0,start=0;
        int n=nums.size();
        while(end<n){
            sum+=nums[end];
            while(sum>=target){
                total=min(total,end-start+1);
                sum-=nums[start];
                start++;
            }
            end++;
        }
        return total==INT_MAX ? 0:total;
    }
};