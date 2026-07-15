class Solution {
public:
    int gcd(int a,int b){
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
    int gcdOfOddEvenSums(int n) {
      int osum=0;
      int esum=0;
      for(int i=1;i<=n;i++){
        esum+=2*i;
        osum+=(2*i)-1;
      }
      return gcd(esum,osum);
    }
};