class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& in) {
        int n=in.size();
        vector<pair<int,int>>m;
        int count=0;
        int lasttime=INT_MIN;
        for(int i=0;i<n;i++){
            m.push_back({in[i][1],in[i][0]});
        }
        sort(m.begin(),m.end());
        for(auto it:m){
            int e=it.first;
            int s=it.second;
            if(s>=lasttime){
                count++;
                lasttime=e;
            }
        }
        return n-count;
    }
};