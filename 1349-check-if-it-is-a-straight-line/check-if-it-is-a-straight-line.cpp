class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        int n = c.size();
        int x0 = c[0][0], y0 = c[0][1];
        int x1 = c[1][0], y1 = c[1][1];

        for (int i = 2; i < n; i++) {
            int x = c[i][0], y = c[i][1];
            if ((x1 - x0) * (y - y0) != (y1 - y0) * (x - x0)) {
                return false;
            }
        }
        return true;
    }
};
