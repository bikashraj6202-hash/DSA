class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)return false;
        int x=n;
        if((x & (x-1))==0){
            return true;
        }
        else return false;
    }
};