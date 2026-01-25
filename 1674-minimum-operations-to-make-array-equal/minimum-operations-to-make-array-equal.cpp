class Solution {
public:
    int minOperations(int n) {
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back((i*2)+1);
        }
      int sum=0;
      for(int i=0;i<n;i++){
        sum+=ans[i];
      }
      int target=sum/n;
      int count=0;
      for(int i=0;i<n;i++){
        if(target-ans[i]<=0){
            break;
        }
        else{
            count+=target-ans[i];
        }
      }
      return count;
    }
};