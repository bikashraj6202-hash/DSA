class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        int i=0;
        int n=s.size();
        int maxi=INT_MIN;
        int index;
        while(i<n){
            maxi=i;
            for(int j=i+1;j<n;j++){
              if(maxi<=s[j]){
                maxi=s[j];
                index=j;
              }
            }
            if(s[i]<maxi){
                swap(s[i],s[index]);
                break;
            }
                i++;
            }
        int ans=stoi(s);
        return ans;
    }
};