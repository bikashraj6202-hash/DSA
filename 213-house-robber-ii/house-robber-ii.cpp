class Solution {
public:
    int solve(vector<int>v){
       int idx=v.size();
            int prev2=0,prev1=v[0];
           for(int i=1;i<idx;i++){
            int taken=v[i];
            if(i>1) taken+= prev2;
            int nottaken=0+prev1;
            int curr=max(taken,nottaken);
            prev2=prev1;
            prev1=curr;
           }
            return prev1;
    }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        vector<int>v1,v2;
        for(int i=0;i<n-1;i++){
            v1.push_back(nums[i]);
        }
        for(int i=1;i<n;i++){
            v2.push_back(nums[i]);
        }
       int a=solve(v1); 
       int b=solve(v2);
       return max(a,b);
    }
};