class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return -1;
        long long sum=0;
        int idx=-1;
        unsigned long long pr=1;
        vector<long long>pq(n);
        pq[0]=nums[0];
        for(int i=1;i<n;i++){
          pq[i]=nums[i]+pq[i-1];
        }

        for(int i=n-1;i>=1;i--){
             if(pr==pq[i-1]){
                idx=i;
            }
            if(pr>=pq[i]/nums[i]){
                break;
            }
            
            pr*=nums[i];
        }
        return idx;
    }
};