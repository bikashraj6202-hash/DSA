class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        if(n==1)return 1;
        unordered_map<char,int>mp;
        for(char ch: s){
            mp[ch]++;
        }
        int count=0;
        bool hasOdd=false;
        for(auto m:mp){
            if(m.second%2==0 && m.second!=0){
                count+=m.second;
            }
              else {
                count += m.second - 1; // use the even part
                hasOdd = true;         // we can place one odd in the middle
            }
        }
       if (hasOdd){
            count++;
       }
        return count;
    }
};