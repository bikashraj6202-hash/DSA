class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
         int count=0;
         int mini=INT_MAX;
         int n=words.size();
        for(int i=0;i<words.size();i++){
            if(words[i]==target){
                mini=min(abs(i-startIndex),mini);
                mini=min(n-abs(i-startIndex),mini);
            }
        }
        if(mini==INT_MAX){
            return -1;
        }
        return mini;
    }
};