class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>ans;
        for(auto  &it:nums){
            ans.push_back(it);
        }
        reverse(nums.begin(),nums.end());
          for(auto  &it:nums){
            ans.push_back(it);
        }
        return ans;
    }
};