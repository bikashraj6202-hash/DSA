class Solution {
public:
    bool canAliceWin(int n) {
        bool t=false;
        int p=10;
        int cnt=1;
        while((n-p)>=0){
            n=n-p;
            p--;
           if(cnt%2!=0){
            t=true;
           }
           else{
            t=false;
           }
           cnt++;
        }
        return t;
    }
};