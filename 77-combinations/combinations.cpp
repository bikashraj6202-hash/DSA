class Solution {
public:
    void solve(int n,int k,vector<vector<int>>&ans,vector<int>&com,int start){
        //base case
        if(com.size()==k){
            ans.push_back(com);
            return;
        }
        for(int i=start;i<=n;i++){
            com.push_back(i);
            solve(n,k,ans,com,i+1);
            com.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>com;
        solve(n,k,ans,com,1);
        return ans;
    }
};