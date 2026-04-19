class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
         int n=nums.size();
        vector<int>pre(n,0),suf(n,0);
        pre[0]=nums[0];
        suf[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            pre[i]=max(nums[i],pre[i-1]);
        }
        for(int j=n-2;j>=0;j--){
            suf[j]=min(nums[j],suf[j+1]);
        }
        for(int i=0;i<n;i++){
            if(pre[i]-suf[i]<=k){
                return i;
            }
        }
        return -1;
    }
};