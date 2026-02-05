class Solution {
public:
    
    bool check(vector<int>p,int target){
        int a=p[0];
        for(int i=1;i<p.size();i++){
            a|=p[i];
        }
        return a==target;
    }
    
    void solve(int idx,vector<vector<int>>&ans,vector<int>&nums,vector<int>&p,int target){
        if(idx==nums.size()){
            return ;
        }
        // ek case solve kare
        for(int i=idx;i<nums.size();i++){
                p.push_back(nums[i]);
                if(check(p,target)){
                    ans.push_back(p);
                }
                solve(i+1,ans,nums,p,target);  
                 p.pop_back(); 
            } 
           
        }
          
    
    int countMaxOrSubsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>p;
        int target=nums[0];
        for(int i=1;i<nums.size();i++){
            target|=nums[i];
        }
        solve(0,ans,nums,p,target);
        return  ans.size();
    }
};