class Solution {
public:
    
    bool solve(vector<int>&nums,bool p,int l,int r,int a, int b){
        if(l>r)return a>=b;
        if(p){
            return solve(nums,false,l+1,r,a+nums[l],b)||solve(nums,false,l,r-1,a+nums[r],b);
        }
        else{
             return solve(nums,true,l+1,r,a,b+nums[l])&& solve(nums,true,l,r-1,a,b+nums[r]);
        }
    }
    bool predictTheWinner(vector<int>& nums) {
        return solve(nums,true,0,nums.size()-1,0,0);
    }
};