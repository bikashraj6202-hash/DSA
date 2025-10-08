class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        int m = potions.size();
        vector<int> ans;

        for (int spell : spells) {
            
            long long minPotion = (success + spell - 1) / spell;
            
            // find the first potion >= minPotion
            auto it = lower_bound(potions.begin(), potions.end(), minPotion);
            
            // count of successful pairs
            int count = potions.end() - it;
            ans.push_back(count);
        }

        return ans;
    }
};