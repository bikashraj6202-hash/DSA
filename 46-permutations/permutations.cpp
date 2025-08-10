class Solution {
public:

void prems(int i,vector<vector<int>>&res,vector<int>&nums){
    // base case 
    if(i==nums.size()){
        res.push_back(nums);
        return;
    }

    for(int j=i;j<nums.size();j++){
        swap(nums[i],nums[j]);
        prems(i+1,res,nums);
        swap(nums[i],nums[j]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        prems(0,res,nums);
        return res;


    }
};
