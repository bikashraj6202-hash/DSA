class Solution {
public:

void solve(vector<int>nums,vector<vector<int>>&ans ,vector<int>output,int index,int n){
ans.push_back(output); // every case;
    for(int i=index;i<n;i++){
        // skip sam dublcate level
        if(i>index && nums[i]==nums[i-1]) continue;

        // exclude term;


//inclde term
int element =nums[i];
output.push_back(element);
solve(nums,ans,output,i+1,n);
output.pop_back();
    }

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
          vector<vector<int>>ans;
          sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>output;
        int index=0;
        solve(nums,ans,output,index,n);
        return ans;
    }
};