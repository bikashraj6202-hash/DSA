class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>mp;
        for(auto it:stones){
            mp[it]++;
        }
        int sum=0;
        for(int i=0;i<jewels.size();i++){
            if(mp.find(jewels[i])!=mp.end()){
                sum+=mp[jewels[i]];
            }
        }
        return sum;
    }
};