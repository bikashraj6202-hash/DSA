class Solution {
public:
    string convertToTitle(int columnNumber) {
        int n=columnNumber;
        string s="";
        while(n>0){
            n--;
            int p=n%26;
            n=n/26;
            s.push_back(p+'A');
        }
        reverse(s.begin(),s.end());
        return s;
  }
};