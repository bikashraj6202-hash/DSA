class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>freq(n-2,-1);
        vector<int>ans;
        for(int i=0;i<n;i++){
            if((++freq[nums[i]])==2){
                ans.push_back(nums[i]);
            }
            else{
                freq[nums[i]]++;
            }
        }
        return ans;
    }
};