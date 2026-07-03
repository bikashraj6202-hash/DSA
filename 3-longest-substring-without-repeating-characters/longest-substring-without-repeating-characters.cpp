class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int low=0;
       int maxi=INT_MIN;
       vector<int>mp(256,0);
       for(int i=0;i<s.size();i++){
        mp[s[i]]++;
        while(mp[s[i]]>1){
            mp[s[low]]--;
            low++;
        }
        maxi=max(maxi,i-low+1);
        }
       return maxi==INT_MIN? 0:maxi;
    }
};