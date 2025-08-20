class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        m[0]=1;
        int total=0,presum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            presum+=nums[i];
            if(m.count(presum-k)){
                total+=m[presum-k];
                m[presum]++;
            }
            else{
                m[presum]++;
            }
        }
        return total;
    }
};