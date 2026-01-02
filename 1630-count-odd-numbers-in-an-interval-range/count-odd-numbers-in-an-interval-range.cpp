class Solution {
public:
    int countOdds(int low, int high) {
        long long diff=high-low;
        long long count=0;
        if(low%2==1){
            diff--;
            count++;
        }
        if( high%2==1){
            diff--;
            count++;
        }
      count+=diff/2;
      return count;
    }
};