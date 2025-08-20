class Solution {
public:
    long long zeroFilledSubarray(vector<int>& arr) {
        vector<int>ans;
        int n=arr.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                count++; 
                ans.push_back(count);
            }
            else{
                count=0;
            } 
        }
        long long sum=0;
    int p=ans.size();
    for(int i=0;i<p;i++){
        sum+=ans[i];
    }
return sum;
    }
};