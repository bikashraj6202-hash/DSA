class Solution {
public:
    string frequencySort(string s) {
       string p="";
       unordered_map<char,int>mp;
       priority_queue<int>pq;
       for(auto it:s){
        mp[it]++;
       }
        for(auto it:mp){
            pq.push(it.second);
        }

        while(!pq.empty()){
            int a=pq.top();
            pq.pop();
            for(auto it:mp){
                if(it.second==a){
                    while(a){
                       p+=it.first;
                        mp[it.first]--;
                        a--;
                    }
                    break;
                }
            }
        }
        return p;
    }
};