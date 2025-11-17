class Solution {
public:
    int numSub(string s) {
      int n=s.size();
      const long long MOD=1e9+7;
      long long sum=0;
      long long count=0;
      for(int i=0;i<n;i++){
        if(s[i]-'0'!=0){
            count++;
        }
        else{
            sum=sum+(count+1)*count/2;
            count=0;
        }
      }
         sum=sum+(((count+1)*count)/2); //last segment
        sum=sum%MOD;
        return sum;
      }
};