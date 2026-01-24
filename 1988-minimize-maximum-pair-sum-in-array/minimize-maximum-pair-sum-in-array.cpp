class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
       int i=0;
       int j=n-1;
       int sum=INT_MIN;
       while(i<j){
        sum=max(sum,nums[i]+nums[j]);
        i++;
        j--;
       }
       return sum;
    }
};