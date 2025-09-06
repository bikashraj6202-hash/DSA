class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;  // store last index of char
        int n = s.size();
        int start = 0, maxLen = 0;

        for (int end = 0; end < n; end++) {
            if (m.count(s[end]) && m[s[end]] >= start) {
                // Move start to one after the last duplicate's index
                start = m[s[end]] + 1;
            }
            m[s[end]] = end;  // update last index
            maxLen = max(maxLen, end - start + 1);
        }
        return maxLen;
    }
};
