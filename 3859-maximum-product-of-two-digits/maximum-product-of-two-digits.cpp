class Solution {
public:
    int maxProduct(int n) {
        vector<int>ans;
        while(n>0){
            int p=n%10;
            n=n/10;
            ans.push_back(p);
        }
        sort(ans.begin(),ans.end());
        int p=ans.size();
        return ans[p-1]*ans[p-2];
    }
};