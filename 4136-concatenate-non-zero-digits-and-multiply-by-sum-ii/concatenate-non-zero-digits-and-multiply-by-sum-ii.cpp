class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n=s.size();
        vector<int>ans;
         const int mod = 1000000007;
        long long pow10[100001];
        pow10[0]=1;
        for(int i=1;i<100001;i++){
            pow10[i]=(pow10[i-1]*10)%mod;
        }
        vector<int>cnt(n+1,0);
        vector<int>pre(n+1,0);
         vector<long long>mp(n+1,0);
         long long sum=0;
         for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+s[i]-'0';
            long long p=s[i]-'0';
            if(p!=0){
                sum=(sum*10)%mod+p;
            }
            mp[i+1]=sum;
            cnt[i+1]=cnt[i]+(p>0);
         }
         for(auto it:mp){
            cout<<it<<" ";
         }
         for(int i=0;i<queries.size();i++){
            int l=queries[i][0];
            int r=queries[i][1];
            int o=cnt[r+1]-cnt[l];
          long long t = (mp[r+1] - (mp[l] * pow10[o]) % mod + mod) % mod;
            long long q=pre[r+1]-pre[l];
            ans.push_back((t*q)%mod);
         }
         return ans;
    }
};