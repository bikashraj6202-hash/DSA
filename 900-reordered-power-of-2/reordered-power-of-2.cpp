class Solution {
public:
    bool reorderedPowerOf2(int n) {
        // yaha pe hm data ko string me rakh ke sort kar denge 
        // iske liye ek string bananai padi
        string s=to_string(n); // yaha pe we convert number to string 
        sort(s.begin(),s.end());
        for(int i=0;i<31;i++){  // 2 ke powe 31 yi exit karta hai 
        int power=1<<i; // ya pe binary operation us kar rahe power ke liye
        string t=to_string(power);
        sort(t.begin(),t.end());
        if(s==t){
            return true;
        }

        }
         return false;
    }
};