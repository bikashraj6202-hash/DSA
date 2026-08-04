class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int a=*max_element(costs.begin(),costs.end());
        vector<int>v(a+1,0);
        int n=costs.size();
        for(int i=0;i<n;i++){
            v[costs[i]]++;
        }
        for(int i=1;i<=a;i++){
            v[i]+=v[i-1];
        }
        vector<int>e(n,0);
        for(int i=n-1;i>=0;i--){
            e[--v[costs[i]]]=costs[i];
        }
      int cnt=0;
        for(int i=0;i<n;i++){
            coins-=e[i];
           if(coins<0){
            return cnt;
           }
            cnt++;
        }
        return cnt;
    }
};