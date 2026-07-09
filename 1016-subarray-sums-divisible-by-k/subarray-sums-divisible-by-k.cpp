class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;

        int pre = 0;
        int cnt = 0;

        for (int x : nums) {
            pre += x;

            int rem = ((pre % k) + k) % k;

            if (mp.count(rem))
                cnt += mp[rem];

            mp[rem]++;
        }

        return cnt;
    }
};