class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n1=arr.size();
        vector<int>ans(n1,0);
        vector<int>p;
        vector<int>n;
        for(int i=0;i<n1;i++){
            if(arr[i]>0){
                p.push_back(arr[i]);
            }
            else{
                n.push_back(arr[i]);
            }
        }
       for(int i=0;i<n1/2;i++){
        ans[2*i]=p[i];
        ans[2*i+1]=n[i];
       }
        return ans;
    }
};