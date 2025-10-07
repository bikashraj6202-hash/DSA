class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int n= numBottles;
        int p=numExchange;
        int ans=n;
        int c;

        while(n>=numExchange){
            c=n%p;
            n=n/p;
            ans+=n;
            n=n+c;
        }
        return ans;
    }
};