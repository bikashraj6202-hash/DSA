class Solution {
public:
    int minSetSize(vector<int>& arr) {
        priority_queue<int>pq;
        unordered_map<int,int>mp;
        for(auto it:arr){
            mp[it]++;
        }
        for(auto it:mp){
            pq.push(it.second);
        }
        int target=(arr.size())/2;
        int sum=0;
        int count=0;
        while(!pq.empty()){
            int a=pq.top();
            pq.pop();
            sum+=a;
            count++;
            if(sum>=target){
                break;
            }
        }
        return count;
    }
};