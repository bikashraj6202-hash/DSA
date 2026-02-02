class Solution {
public:
    int compress(vector<char>& chars) {
       int index=0;
       int n= chars.size();
       int i=0;
     while(i<n){
        char c=chars[i];
        int count=0;
        while(i<n && chars[i]==c){
            count++;
            ++i;
        }
       chars[index++]=c;
        if(count>1){
            for(const char c: to_string(count)){
           chars[index++]=c;
            }
        }
       }
       return index;
    }
};