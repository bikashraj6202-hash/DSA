class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        bool mp[26];
        for(char &ch:brokenLetters){
            mp[ch-'a']=true;
        }
        bool type=true;
        int result=0;
        for(char &ch:text){
            if(ch==' '){
                if(type){
                    result++;
                }
                type=true;
            }
            else if(mp[ch-'a']==true){
                type=false;
            }
        }
        if(type) result++;
        return result;
    }
};