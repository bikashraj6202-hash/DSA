class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
         if(intervals.size()<0 && newInterval.size()<0)return intervals;
         vector<vector<int>>in;
         for(auto it:intervals){
            in.push_back(it);
         }
         in.push_back(newInterval);
         sort(in.begin(),in.end());
         int n=in.size();
         vector<vector<int>>output;
         output.push_back(in[0]);
         for(int i=1;i<n;i++){
            if(output.back()[1]>=in[i][0]){
                output.back()[1]=max(output.back()[1],in[i][1]);
            }
            else{
                output.push_back(in[i]);
            }
         }
         return output;
    }
};