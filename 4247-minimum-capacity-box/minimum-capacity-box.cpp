class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int n=capacity.size();
        int mini=INT_MAX;
        int idx=-1;
        for(int i=0;i<n;i++){
            if(mini>capacity[i] && capacity[i]>=itemSize){
                mini=capacity[i];
                idx=i;  
            }
        }
        return idx;
    }
};