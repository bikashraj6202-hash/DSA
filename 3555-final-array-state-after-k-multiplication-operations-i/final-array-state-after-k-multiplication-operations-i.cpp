class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<int,vector<int>,greater<int>>pq;
        int n=nums.size();
         for(auto it:nums){
                pq.push(it);
            }
        while(k){
            int p=pq.top();
            pq.pop();
            int q;
            for(int i=0;i<n;i++){
                if(nums[i]==p){
                    q=i;
                    nums[i]=nums[i]*multiplier;
                    break;
                }
            }
            pq.push(nums[q]);
            k--;
        }
        return nums;
    }
};