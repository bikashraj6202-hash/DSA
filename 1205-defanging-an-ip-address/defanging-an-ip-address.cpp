class Solution {
public:
    string defangIPaddr(string address) {
        string s="";
        string p="].[";
        int n=address.size();
        for(int i=n-1;i>=0;i--){
            if(address[i]=='.'){
                s+=p;
            }
            else{
            s+=address[i];
            }
        }
        reverse(s.begin(),s.end());
        return s;
    }
};