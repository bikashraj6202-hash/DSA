class Solution {
public:
    int gcd(int a,int b){
        while(b!=0){
            int temp=b;
            b=a%b;;
            a=temp;
        }
        return a;
    }
    
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>p;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(nums[i],maxi);
            p.push_back(gcd(nums[i],maxi));
        }
        sort(p.begin(),p.end());
        int i=0;
        int j=p.size()-1;
        int
        long long sum=0;
        while(i<j){
            sum+=gcd(p[i],p[j]);
            i++;
            j--;
        }
        return sum;
    }
};