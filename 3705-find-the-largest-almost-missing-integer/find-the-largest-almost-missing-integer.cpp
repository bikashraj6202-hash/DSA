class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
          int n=nums.size();
        if (k == n)
            return *max_element(nums.begin(), nums.end());
        unordered_map<int,int>mp;
      
        for(int i=0;i<=n-k;i++){
            for(int j=i;j<i+k;j++){
                mp[nums[j]]++;
            }
        }
        int maxi=-1;
        for(auto it:mp){
            cout<<it.first<<" "<<it.second<<"    ";
            if(it.second==1){
                maxi=max(it.first,maxi);
            }
        }
        return maxi;
    }
};