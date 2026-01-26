class Solution {
public:
    int maxDistinct(string s) {
        vector<int>v(26,0);
        int count=0;
        for(int i=0;i<s.size();i++){
            if(v[s[i]-'a']==0){
                v[s[i]-'a']=1;
                count++;
            }
            if(count==26){
                break;
            }
        }
        return count;
    }
};