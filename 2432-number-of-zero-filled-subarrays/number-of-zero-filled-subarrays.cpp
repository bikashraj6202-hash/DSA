class Solution {
public:
    long long zeroFilledSubarray(vector<int>& arr) {
        long long sum=0;
        int n=arr.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                count++; 
             sum+=count;
            }
            else{
                count=0;
            } 
        }
      return sum;
    }
};