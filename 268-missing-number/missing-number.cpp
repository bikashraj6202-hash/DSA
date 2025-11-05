class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int i = 0, j = n - 1;

        // If 0 is missing
        if (nums[0] != 0) return 0;

        while (i <= j) {
            int mid = (i + j) / 2;
            if (nums[mid] == mid)
                i = mid + 1;   // search right
            else
                j = mid - 1;   // search left
        }

        return i;  // missing number is the first index where nums[index] != index
    }
};
