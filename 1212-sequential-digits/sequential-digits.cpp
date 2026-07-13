class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        string s="123456789";
        string s1=to_string(low);
        string s2=to_string(high);
        int n=s.size();
        int n1=s1.size();
        int n2=s2.size();
        while(n1<=n2){
            int i=0;
            while((i+n1)<=n){
                int  p=stoi(s.substr(i,n1));
                cout<<p<<" ";
                if(p<=high && p>=low){
                    ans.push_back(p);
                }
                 else if(p>high){
                    break;
                }
                 i++;
            }
            n1++;
        }
        return ans;
    }
};