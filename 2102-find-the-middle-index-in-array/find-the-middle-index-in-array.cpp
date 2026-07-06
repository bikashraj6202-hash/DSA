class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
         int n=nums.size();
      vector<int>p(n,0);
      vector<int>s(n,0);
      for(int i=1;i<n;i++){
        p[i]=p[i-1]+nums[i-1];
        s[n-1-i]=s[n-i]+nums[n-i];
      }
      for(int i=0;i<n;i++){
        if(p[i]==s[i]){
            return i;
        }
      }
      return -1;
    }
};