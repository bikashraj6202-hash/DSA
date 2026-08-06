class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<n+10;i++){
            int num=i;
            int p=1;
            while(num){
                p*=(num%10);
                num/=10;
            }
            if(p%t==0){
                return i;
            }
        }
        return -1;
    }
};