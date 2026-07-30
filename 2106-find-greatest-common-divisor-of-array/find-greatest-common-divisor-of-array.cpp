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
     int findGCD(vector<int>& nums) {
        int fl=nums[0];
        int sl=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>fl)fl=nums[i];
            if(nums[i]<sl) sl=nums[i];
        }

        cout<< fl<<" "<<sl;
       return  gcd(fl,sl);
    }
};