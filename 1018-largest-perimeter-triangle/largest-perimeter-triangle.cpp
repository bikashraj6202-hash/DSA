class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        int peri=0;
        sort(nums.begin(),nums.end());
        for(int i=2;i<n;i++){
            if((nums[i-2]+nums[i-1])>nums[i]){
                peri=max(nums[i-2]+nums[i-1]+nums[i],peri);
            }
        }
        return peri;
    }
};