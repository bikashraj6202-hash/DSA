class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        int m = grid.size();
        int n = grid[0].size();

        for(int i = 0; i < m; i++) {
            int j = 0, k = n - 1;
            int firstNeg = n;

            while(j <= k) {
                int mid = j + (k - j) / 2;

                if(grid[i][mid] < 0) {
                    firstNeg = mid;   // possible answer
                    k = mid - 1;      // search left
                } else {
                    j = mid + 1;
                }
            }
            count += (n - firstNeg);
        }
        return count;
    }
};
