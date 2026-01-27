class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int n=s.size();
       vector<int>ans1(26,0);
       vector<int>ans2(26,0);
       for(int i=0;i<n;i++){
       ans1[s[i]-'a']=i;
       ans2[t[i]-'a']=i;
       }
       int sum=0;
       for(int i=0;i<n;i++){
        sum+=abs(ans1[s[i]-'a']-ans2[s[i]-'a']);
       }
       return sum;
    }
};