class Solution {
public:
    int addDigits(int num) {
        int res=num;
        while(!(res/10==0)){
             res=0;
            while(num){
            int p=num%10;
            num=num/10;
            res=res+p;
            }
            num=res;
        }
        return res;
    }
};