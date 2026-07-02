class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       int p=0;
       vector<vector<int>>r;
       while(p<numRows){
        vector<int>ans;
        for(int i=0;i<=p;i++){
            if(i==0 || i==p)ans.push_back(1);
            else{
                int sum=r[p-1][i-1]+r[p-1][i];
                ans.push_back(sum);
            }
        }
        r.push_back(ans);
        p++;
       }
       return r;
    }
};