class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<string>ans(n);// make ematy string;
        priority_queue<pair<int,int>>maxheap;
        for(int i=0;i<n;i++){
            maxheap.push({score[i],i}) ;
        }
        vector<string>rank={"Gold Medal","Silver Medal","Bronze Medal"};
        int num=1;
        while(!maxheap.empty()){
            auto top=maxheap.top();
            maxheap.pop();
            int index=top.second;
            if(num<4){
                ans[index]=rank[num-1];
            }
            else{
                ans[index]=to_string(num);
            }
            num++;
        }
        return ans;

    }
};