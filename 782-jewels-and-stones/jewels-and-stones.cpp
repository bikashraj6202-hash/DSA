class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>mp;
        for(auto it:jewels){
            mp[it]++;
        }
        int sum=0;
        for(int i=0;i<stones.size();i++){
            if(mp[stones[i]]!=0){
                sum++;
            }
        }
        return sum;
    }
};