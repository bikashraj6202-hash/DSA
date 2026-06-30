class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int count=1;
       int ele=nums[0];
       int n=nums.size();
       for(int i=1;i<n;i++){
        if(nums[i]==ele){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            count++;
            ele=nums[i];
        }
       }
       return ele;
    }
};