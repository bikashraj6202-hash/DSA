class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int dis=1e9;
        for(int  i=0;i<nums.size();i++){
            if(nums[i]==target){
                dis=min(dis,abs(i-start));
            }
        }
        return dis ;
    }
};