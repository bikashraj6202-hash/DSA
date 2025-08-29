#include <algorithm>
#include <vector>

class Solution {
public:
    int thirdMax(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        
        int n = nums.size();
        int count = 1;
        if (n < 3) {
            return nums[n - 1];
        }

        // Iterate backward to find the third distinct maximum
        for (int i = n - 2; i >= 0; --i) {
            // Check for distinct elements
            if (nums[i] < nums[i + 1]) {
                count++;
                if (count == 3) {
                    return nums[i];
                }
            }
        }
        
        // If there are fewer than three distinct elements, return the maximum
        return nums[n - 1];
    }
};
