class Solution {
public:
    string getHint(string s, string g) {
        int bull=0;
        int cow=0;
        int n= s.size();
          unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(s[i]==g[i]){
                bull++;
            }
            else{
                mp[g[i]]++;
            }
        }
       
        for(int i=0;i<n;i++){
           if(s[i]!=g[i] && mp[s[i]]>0){
            cow++;
            mp[s[i]]--;
          }
        }
        string p=to_string(bull)+"A"+to_string(cow)+"B";
        return p;
    }
};