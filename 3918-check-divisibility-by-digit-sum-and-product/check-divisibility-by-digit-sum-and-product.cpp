class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int  p=1;
        int d=n;
         while(n){
            int q=n%10;
            sum+=q;
            p=p*q;
            n=n/10;
        }
        cout<<sum <<" "<<p;
       if(d%(sum+p)==0){
        return true;
       }
       else return false;
    }
};