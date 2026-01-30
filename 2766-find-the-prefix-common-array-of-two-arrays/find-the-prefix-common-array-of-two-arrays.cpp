class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>ans;
        unordered_map<int,int>mp;
         if(A.size()==1 && B.size()==1 && A[0]==B[0]){
            ans.push_back(A[0]);
            return ans;
        } 
        // ans.push_back(0);
        // mp[A[0]]++;
        for(int i=0;i<A.size();i++){
            int j=i;
            int count=0;
            mp[A[i]]++;
            while(j>=0){
                if(mp.find(B[j])!=mp.end()){
                    count++;
                }
                j--;
            }
            ans.push_back(count);
        }
        return ans;
    }
};