class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n= s.size();
        vector<int>ans;
        int p=n;
        int q=0;
        for(int i=0;i<n;i++){
            if(s[i]=='D'){
                ans.push_back(p);
                p--;
                if(i==n-1){
                    ans.push_back(p);
                }
            }
            else{
                ans.push_back(q);
                 q++;
                if(i==n-1){
                    ans.push_back(q);
                }
               
            }
        }
        return ans;
    }
};