class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left=0;
        int right=0;
        vector<int>result;
        while(left<m && right<n){
            if(nums1[left]<=nums2[right]){
                result.push_back(nums1[left]);
                       left++;
            }
            else{
                  result.push_back(nums2[right]); 
                   right++;
            }
     
          
        }
        while(left<m){
              result.push_back(nums1[left]);
              left++;
        }
        while(right<n){
              result.push_back(nums2[right]);
              right++;
        }
        for(int i=0;i<result.size();i++){
            nums1[i]=result[i];
        }
    }
};