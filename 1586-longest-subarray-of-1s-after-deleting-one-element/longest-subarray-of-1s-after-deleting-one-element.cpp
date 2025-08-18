class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int start=0;
        int end=0;
        int n=nums.size();
        int zerocount =0;
        int count=0;
        int maxi=0;
        while(end<n){
            if(nums[end]==0){
                zerocount++;
            }
            while(zerocount>1){
                if(nums[start]==0){
                    zerocount--;
                }
                start++;
            }
            maxi=max(maxi,end-start);
            end++;
        }
       
        return maxi;
    }
};