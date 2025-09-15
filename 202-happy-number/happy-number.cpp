class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>set;
      
        while(true){ 
             int sum=0;
            while(n>0){
                int p=n%10;
                sum+=pow(p,2);
                n=n/10;
            }
            if(sum==1)return true;
            n=sum;
            if(set.find(n)!=set.end()){
                return false;
            }
            set.insert(n);
    
        }
        return true;
    }
};