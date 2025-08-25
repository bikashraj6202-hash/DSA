class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int> ans;
        ans.reserve(n*m);

        int i = 0, j = 0, dir = 1; // dir=1 → up-right, dir=-1 → down-left

        while(ans.size() < n*m) {
            ans.push_back(mat[i][j]);

            if(dir == 1) { // moving up-right
                if(j == m-1) { // last column
                    i++;
                    dir = -1;
                }
                else if(i == 0) { // first row
                    j++;
                    dir = -1;
                }
                else { // normal move
                    i--; j++;
                }
            } 
            else { // dir == -1, moving down-left
                if(i == n-1) { // last row
                    j++;
                    dir = 1;
                }
                else if(j == 0) { // first col
                    i++;
                    dir = 1;
                }
                else { // normal move
                    i++; j--;
                }
            }
        }

        return ans;
    }
};
