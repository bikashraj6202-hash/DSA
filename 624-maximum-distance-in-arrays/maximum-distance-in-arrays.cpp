class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int n=arrays.size();
       int smallest=arrays[0][0];
       int biggest=arrays[0].back();
       int dis=0;
       for(int i=1;i<n;i++){
        dis=max(dis,abs(arrays[i].back()-smallest));
        dis=max(dis,abs(biggest-arrays[i][0]));
        smallest=min(smallest,arrays[i][0]);
        biggest=max(biggest,arrays[i].back());
       }
       return dis;
    }
};