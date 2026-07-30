class Solution {
public:
    int gcd(int a,int b){
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
    int subarrayGCD(vector<int>& nums, int k) {
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==k)cnt++;
        }
        for(int i=0;i<n;i++){
            int p=nums[i];
            for(int j=i+1;j<n;j++){
                p=gcd(p,nums[j]);
                if(p==k)cnt++;
                if(p<k)break;
            }
        }
        return cnt;
    }
};