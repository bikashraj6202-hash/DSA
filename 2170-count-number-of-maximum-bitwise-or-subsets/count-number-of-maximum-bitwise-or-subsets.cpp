class Solution {
public:
    
    bool check(vector<int>p,int target){
        int a=p[0];
        for(int i=1;i<p.size();i++){
            a|=p[i];
        }
        return a==target;
    }
    
    void solve(int idx,int &count,vector<int>&nums,vector<int>&p,int target){
        if(idx==nums.size()){
            return ;
        }
        // ek case solve kare
        for(int i=idx;i<nums.size();i++){
                p.push_back(nums[i]);
                if(check(p,target)){
                   count++;
                }
                solve(i+1,count,nums,p,target);  
                 p.pop_back(); 
            } 
           
        }
          
    
    int countMaxOrSubsets(vector<int>& nums) {
       int count;
        vector<int>p;
        int target=nums[0];
        for(int i=1;i<nums.size();i++){
            target|=nums[i];
        }
        solve(0,count,nums,p,target);
        return count;
    }
};