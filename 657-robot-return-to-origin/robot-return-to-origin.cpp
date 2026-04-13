class Solution {
public:
    bool judgeCircle(string moves) {
        int sum1=0;
        int sum2=0;
        unordered_map<char,int>mp{{'U',1},{'D',-1},{'L',-2},{'R',+2}};
        for(auto it:moves){
            if(it=='U'||it=='D')sum1+=mp[it];
            else sum2+=mp[it];
        }
        return sum1==0 && sum2==0? true:false;
    }
};