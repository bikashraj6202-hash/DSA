class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n=friends.size();
      unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[friends[i]]++;
        }
        vector<int>ans;
        for(auto it:order){
            if(mp.find(it)!=mp.end()){
                ans.push_back(it);
            }
        }
        return ans;
    }
};