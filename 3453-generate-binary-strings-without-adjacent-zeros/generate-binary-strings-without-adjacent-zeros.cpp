class Solution {
public:
    void solve (int idx,vector<string>&ans, string &s,int n){
        if(idx==n){
            ans.push_back(s);
            return;
        }

        s.push_back('1');
        solve(idx+1,ans,s,n);
        s.pop_back();
        if(s.empty() ||s.back()!='0'){
            s.push_back('0');
            solve(idx+1,ans,s,n);
            s.pop_back();
        }
    }
    vector<string> validStrings(int n) {
        vector<string>ans;
        string s;
        solve(0,ans,s,n);
        return  ans;
    }
};