class Solution {
public:
    char findTheDifference(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // int i=0;
        // for(char &ch:s){
        //     if(ch!=t[i]){
        //         return t[i];
        //     }
        //     i++;
        // }
        // return t[i];


        //using second method

        int xorsum=0;
        for(int i=0;i<s.size();i++){
            xorsum=xorsum^s[i];
        }
        for(int i=0;i<t.size();i++){
            xorsum=xorsum^t[i];
        }
        return char(xorsum);
    }
};