class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto it:nums){
            pq.push(it);
        }
        nums.clear();
        while(pq.size()>1){
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            nums.push_back(b);
            nums.push_back(a);
        }
        return nums;
    }
};