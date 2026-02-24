class Solution {
public:
    int smallestEvenMultiple(int n) {
        int i=1;
        int p;
        while(n){
             p=n*i;
            if(p%2==0)
            {
                return p;
                break;
            }
           i++;
        }
        return p;
    }
};