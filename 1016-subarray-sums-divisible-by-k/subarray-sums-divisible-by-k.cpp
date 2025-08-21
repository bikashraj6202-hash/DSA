class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int total=0;
        int rem,sum=0;
        m[0]=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            rem=(sum%k +k)%k;
            // if(m.count(rem)){
            //     total+=m[rem];
            //     m[rem]++;
            // }
            // else{
            //     m[rem]++;
            // }
            total+=m[rem];
            m[rem]++;
        }
        return total;
    
    }
};