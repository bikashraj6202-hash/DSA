class Solution {
public:

    bool ispali(string &str){
        int i=0;
        int j=str.size()-1;
        while(i<j){
            if(str[i]!=str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    
    void solve(string &s, vector<vector<string>>&ans,vector<string>&temp,int index,int n){
        //base condition
        if(index==n){
            ans.push_back(temp);
            return;
        }
        string pali;
        for(int i=index;i<n;i++){
            pali+=s[i];
            if(ispali(pali)){
                temp.push_back(pali);
                solve(s,ans,temp,i+1,n);
                temp.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        vector<vector<string>>ans;
        int n=s.size();
        solve(s,ans,temp,0,n);
        return ans;
    }
};