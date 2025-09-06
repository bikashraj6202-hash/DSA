class Solution {
public:
    bool digitCount(string num) {
        int n=num.size();
        unordered_map<int,int>m;

        for(char c:num){
            m[c-'0']++;
        }
        for(int i=0;i<n;i++){
            if(m[i]!=(num[i]-'0')){
                return false;
            }
        }
        return true;
    }
};