class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n=tokens.size();
        if(n==0)return 0;
        int ans=0;
        int count=0;
        sort(tokens.begin(),tokens.end());
        int i=0;
        int j=n-1; 
        if(tokens[i]>power){
            return 0;
        }
        while(i<=j){
            if(power>=tokens[i]){
                power=power-tokens[i];
                count++;
                i++;
            }
            else{
                power=power+tokens[j];
                j--;
                count--;
            }
            ans=max(ans,count);
        }
        return ans;
    }
};