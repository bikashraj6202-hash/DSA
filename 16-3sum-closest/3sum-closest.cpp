
   class Solution {
public:
    int threeSumClosest(std::vector<int>& nums, int target) {
        int n = nums.size();
        std::sort(nums.begin(), nums.end());
        int closest_sum = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < n - 2; ++i) {
            // Skip duplicate elements for the first number
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int current_sum = nums[i] + nums[left] + nums[right];

                // Check if the current sum is closer to the target
                if (std::abs(current_sum - target) < std::abs(closest_sum - target)) {
                    closest_sum = current_sum;
                }

                if (current_sum < target) {
                    left++;
                } else if (current_sum > target) {
                    right--;
                } else {
                    // Exact match found, return immediately
                    return current_sum;
                }
            }
        }
        return closest_sum;
    }
};