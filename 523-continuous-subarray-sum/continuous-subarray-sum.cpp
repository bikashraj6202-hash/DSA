class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        if (n < 2) return false;

        unordered_map<int, int> m;
        m[0] = -1;  // remainder 0 seen at index -1
        int pre = 0;

        for (int i = 0; i < n; i++) {
            pre += nums[i];
            int res = pre % k;
            if (res < 0) res += k; // handle negative k

            if (m.count(res)) {
                // ensure subarray length >= 2
                if (i - m[res] >= 2) return true;
            } else {
                m[res] = i; // store first occurrence
            }
        }
        return false;
    }
};
