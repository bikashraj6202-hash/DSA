class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(auto it:nums){
            pq.push(it);
        }
        int a;
        while(k--){
            a=pq.top();
            pq.pop();
        }
        return a;
    }
};