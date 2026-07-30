class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        int cnt=0;
        int p=n/8;
        int i=1;
        while(p--){
            cnt+=8*i;
            i++;
        }
        int q=n%8;
        cnt+=i*q;
        return  cnt ;

    }
};