class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        string p=s.substr(0,n/2);
        sort(p.begin(),p.end());
        string t=p;
        reverse(t.begin(),t.end());
        if(n%2==0){
            return p+t;
        }
        else{
         return p+s[n/2]+t;
        }
    }
};