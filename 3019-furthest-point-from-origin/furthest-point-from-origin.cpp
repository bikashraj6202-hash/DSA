class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n=moves.size();
        int left=0;
        int right=0;
       for(auto it:moves){
        if(it=='L'){
            left++;
        }
        else if(it=='R'){
            right++;
        }
       }
       int p=n;
       if(left>=right){
         return n-2*right;
       }
       else if(right>left)return n-2*left;

       return n;
    }
};