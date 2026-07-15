class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& in) {
        vector<vector<int>>ans;
        sort(in.begin(),in.end());
        ans.push_back(in[0]);
        for(int i=1;i<in.size();i++){
            if(ans.back()[0]<=in[i][0] && ans.back()[1]>=in[i][1]){
                continue;
            }
            else if(ans.back()[0]>=in[i][0] && ans.back()[1]<=in[i][1]){
                ans.pop_back();
            }
            ans.push_back(in[i]);
        }
        return ans.size();
    }
};