class Solution {
public:
    int maximumLengthSubstring(string s) {
        int  n=s.size();
        vector<int>v(26,0);
        int i=0,j=0;
        int ans=0;
        while(j<n){
            while( j<n && v[s[j]-'a']<2){
                v[s[j]-'a']++;
                 j++;
            }
            ans=max(j-i,ans);
             v[s[i]-'a']--;
             i++;
        }
        return ans;
    }
};