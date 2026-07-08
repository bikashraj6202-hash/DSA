class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n,0);
        nums[0]==0?pre[0]=-1:pre[0]=1;
        for(int i=1;i<n;i++){
            if(nums[i]==0){
                pre[i]=pre[i-1]-1;
            }
            else{
                pre[i]=pre[i-1]+1;
            }
        } 
        for(auto it:pre){
            cout<<it <<" ";
        }
        int total=0;
        unordered_map<int,int>mp;
        mp[0]=-1;
        for(int i=0;i<n;i++){
            if(mp.count(pre[i])){
                total=max(total,i-mp[pre[i]]);
            }
            else{
            mp[pre[i]]=i;
            }
        }
        return total;
    }
};