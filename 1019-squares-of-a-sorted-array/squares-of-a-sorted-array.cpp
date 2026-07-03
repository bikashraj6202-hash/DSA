class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int j=-1;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                j++;
            }
            nums[i]=nums[i]*nums[i];
        }
        if(j==n-1){ reverse(nums.begin(),nums.end());
        return nums;
        }
        int i=j+1;
        while(i<n &&j>=0){
            if(nums[i]<=nums[j]){
                ans.push_back(nums[i]);
                i++;
            }
            else{
                ans.push_back(nums[j]);
                j--;
            }
        }
        while(i<n){
            ans.push_back(nums[i]);
            i++;
        }
        while(j>=0){
            ans.push_back(nums[j]);
            j--;
        }
        return ans;
    }
};