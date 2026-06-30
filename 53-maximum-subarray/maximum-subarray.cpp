class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        int i=0;
        int j=1;
        int n=nums.size();
        int sum=nums[0];
        int maxsum=sum;
        while(j<n){
            if((nums[j]+sum)<nums[j]){
                i=j;
                sum=nums[j];
            }
            else{
                sum=sum+nums[j];
            }
            j++;
            maxsum=max(maxsum,sum);
        }
        return maxsum;
    }
};