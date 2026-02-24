class Solution {
public:
    int mirrorDistance(int n) {
        int p=0;
        int q=n;
        while(q){
           int  r=q%10;
            p=p*10+r;
            q=q/10;
        }
        return abs(n-p);
    }
};