class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int maxcount=-1;
        int maxf=0;
        for(auto it:mp){
            if(it.second>maxcount){
                maxcount=it.second;
                maxf=it.first;
            }
        }
        return maxf;
    }
};