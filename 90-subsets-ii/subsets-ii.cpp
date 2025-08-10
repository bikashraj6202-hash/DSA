class Solution {
public:

void solve(vector<int>nums,vector<int>output,int i,vector<vector<int>>&ans){
        //base case 
     if(i>=nums.size()){
        ans.push_back(output);
        return;
     }

     //include term {1,2,3},{3};
     int element=nums[i];
     output.push_back(element);
     solve(nums,output,i+1,ans);
     output.pop_back();

     // main part exclude me exixtkarta hai 
     int idx=i+1;
     while(idx<nums.size() && nums[idx]==nums[idx-1]){
        idx++;
     }
     solve(nums,output,idx,ans);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
vector<int>output;
vector<vector<int>>ans;
int index=0;
solve(nums,output,index,ans);
return ans;
    }
};