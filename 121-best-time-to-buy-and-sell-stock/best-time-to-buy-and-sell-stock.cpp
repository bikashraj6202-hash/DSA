class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mini=p[0];
        int pro=0;
        for(int i=0;i<p.size();i++){
            int cost=p[i]-mini;
            pro=max(cost,pro);
            mini=min(mini,p[i]);
        }
        return pro;
    }
};