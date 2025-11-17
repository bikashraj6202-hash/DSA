class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>mp;
        int n=s.size();
        for(int i=0;i<n;i++){
            mp[s[i]]=i;
        }
        int i=0;
        int lastindex=0;
        int p=0;
        vector<int>ans;
        while(i<n){
            lastindex=mp[s[i]];
            while(lastindex!=i && i<n){
                if(lastindex<mp[s[i]]){
                    lastindex=mp[s[i]];
                }
                i++;
            }
             i++;
            ans.push_back(i-p);
          p=i;
        }
        return ans;
    }
};