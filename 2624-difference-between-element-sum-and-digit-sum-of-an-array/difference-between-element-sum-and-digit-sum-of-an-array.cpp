class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1=0;
        int sum2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
     sum2+=nums[i];
        int p=nums[i];
        while(p){
            sum1+=p%10;
            p=p/10;
        }
        }
        return abs(sum2-sum1);
    }
};