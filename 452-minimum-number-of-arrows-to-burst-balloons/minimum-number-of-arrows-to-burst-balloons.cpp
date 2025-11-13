class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        sort(points.begin(),points.end());
        int last=points[0][1];
        int arrow=1;
        int i=1;
       while(i<n){
        if(last>=points[i][0]){
       last = min(last, points[i][1]); // narrow intersection
        }
        else {
            arrow++;
            last=points[i][1];
        }
        i++;
       }
return arrow;
    }
};