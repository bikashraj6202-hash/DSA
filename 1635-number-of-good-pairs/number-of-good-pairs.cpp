class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>count;
        int res=0;
        for(auto num:nums){
            if(count.find(num)!=count.end()){
                res+=count[num]++;
            }
            else{
                count[num]++;
            }
        
      
    }
      return res;
    }
};