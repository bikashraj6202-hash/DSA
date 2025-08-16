class Solution {
public:
    int maximum69Number (int num) {
        vector<int>ans;
        while(num>0){
            int element=num%10;
            ans.push_back(element);
            num/=10;
        }
        int n=ans.size();
        int sum=0;
        int count=1;
        for(int i=n-1;i>=0;i--){
            if(ans[i]==6 && count==1){
                ans[i]=9;
                count--;
            }
            sum=sum*10+ans[i];
        }
        return sum;
 
    }
};