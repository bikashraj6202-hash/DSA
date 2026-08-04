class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        int a=*max_element(nums.begin(),nums.end());
        int b=*min_element(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=b+1;i<a;i++){
            if(find(nums.begin(), nums.end(), i) != nums.end()){
                continue;
            }
            ans.push_back(i);
        }
        return ans;
    }
};