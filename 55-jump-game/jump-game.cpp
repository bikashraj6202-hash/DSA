class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxi=0;
        int n=nums.size();
        if(nums.size()<=1)return true;
        for(int i=0;i<n-1;i++){
            if(maxi<nums[i]){
                maxi=nums[i];
            }
                maxi--;
            if(maxi<0){
                return false;
            }
        }
        return true;
    }
};