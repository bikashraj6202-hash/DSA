class Solution {
public:
    vector<int> sumZero(int n) {
       vector<int>arr(n,0);
        long long sum=0;
        for(int i=0;i<n-1;i++){
            sum=sum+i+1;
            arr[i]=i+1;
        }
        arr[n-1]=-sum;
        return arr;
    }
};