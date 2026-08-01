class Solution {
public:
    int minimumPushes(string word) {
        vector<int>v(26,0);
        for(int i=0;i<word.size();i++){
            v[word[i]-'a']++;
        }
        sort(v.begin(),v.end(),greater<>());
        int index=0;
        int i=0;
        int count=0;
        while(i<v.size()){
            if(i%8==0 ){
                index++;
            }
            count+=v[i]*index;
            i++;
        }
        return count;
    }
};