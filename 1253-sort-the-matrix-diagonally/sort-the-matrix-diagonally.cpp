class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
       unordered_map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mp[i-j].push_back(mat[i][j]);
            }
        }
        for(auto it: mp){
            sort(mp[it.first].begin(),mp[it.first].end());
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                 mat[i][j] = mp[i - j].front(); // Get the smallest element
                mp[i - j].erase(mp[i - j].begin()); // Remove it
            }
        }
        return mat;
    }
};