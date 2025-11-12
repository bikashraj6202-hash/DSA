class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0;
        int ans=0;
        for( const auto &it:s){
            count+= it=='L'? 1:-1;
            if(count==0){
                ans++;
            }
        }
        return ans;
    }
};