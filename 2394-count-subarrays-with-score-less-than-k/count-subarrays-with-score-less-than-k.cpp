class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
          int n=nums.size();
          int start=0,end=0;
          long long count=0;
          long long sum=0; 
          long long  p=0;
          while(end<n){
            sum+=nums[end];
         p=sum*(end-start+1);
            while(p>=k && start<=end){
                sum-=nums[start];
                start++;
                p=sum*(end-start+1);
            }  
           
           count+=(end-start+1);
            end++;
    

          }
          return count;
    }
};