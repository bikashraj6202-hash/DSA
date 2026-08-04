class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp;
        for(int i=0;i<text.size();i++){
            mp[text[i]]++;
        }
        string p="balloon";
        int cnt=0;
        bool t=true;
         while(t){
         for(int i=0;i<p.size();i++){
            if(mp.find(p[i])!=mp.end() && mp[p[i]]!=0){
                mp[p[i]]--;
            }
            else{
                t=false;
                break;
            }
        }
        if(t)cnt++;
        }
        return cnt;
    }
};