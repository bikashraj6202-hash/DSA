class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,int>mp;
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(mp.find(s[i])!=mp.end()){
                continue;
            }
            else{
            mp[s[i]]++;
            ans++;
            }
        }
        return ans;
    }
};