class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start=0;
        int zerocount=0;
        int end=0;
        int maxi=0;
        int n=nums.size();
        while(end<n){
            if(nums[end]==0){
                zerocount++;
            }
            while(zerocount>k){
                if(nums[start]==0){
                zerocount--;
                }
                start++;
            }
          
            maxi=max(maxi,end-start+1);
             end++;
        }
        return maxi;
    }
};