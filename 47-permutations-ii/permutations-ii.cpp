class Solution {
public:

void solve(int i,vector<vector<int>>&res,vector<int>&nums){
    // base case 
    if(i==nums.size()-1){
        res.push_back(nums);
        return;
    }
    unordered_set<int>seen;

    for(int j=i;j<nums.size();j++){
        if(seen.count(nums[j])) continue; // skip duplicake element basically set is 
        seen.insert(nums[j]); // for dublicate emement
        swap(nums[i],nums[j]);
        solve(i+1,res,nums);
        swap(nums[i],nums[j]);  // backtraking omg
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>res;
        solve(0,res,nums);
        return res;
    }
};