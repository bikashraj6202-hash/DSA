class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
       vector<int>v=arr;
       sort(v.begin(),v.end());
       unordered_map<int,int>mp;
       vector<int>ans;
       int rank=1;
       for(auto it:v){
        if(mp.contains(it)){
            continue;
        }
        mp[it]=rank++;
       }
       for(auto it: arr){
        ans.push_back(mp[it]);
       }
       return ans;
    }
};