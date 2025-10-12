class Solution {
public:
    string multiply(string num1, string num2) {
        int n1=num1.size();
        int n2=num2.size();
        vector<int>arr1;
        vector<int>arr2;
        string s="";

        for(int i=0;i<n1;i++){
            arr1.push_back(num1[i]-'0');
        }
         for(int i=0;i<n2;i++){
            arr2.push_back(num2[i]-'0');
        }

         vector<int>ans(n1+n2,0);
         for(int i=n1-1;i>=0;i--){
            for(int j=n2-1;j>=0;j--){
                 int mul=arr1[i]*arr2[j];
                int sum=mul+ans[i+j+1];
                ans[i+j+1]=sum%10;
                ans[i+j]+=sum/10;
            }
         }
         int index=0;
         while(index<ans.size() && ans[index]==0 ){
            index++;
         }
         for(int i=index;i<ans.size();i++){
            s+=(ans[i]+'0');
         }
      return s.empty() ? "0" : s;
    }
};