class Solution {
public:
    void wiggleSort(vector<int>& nums) {

int n=nums.size();
vector<int>ans=nums;
sort(ans.begin(),ans.end());
int j=n-1;
int k=(n-1)/2;
for(int i=0;i<n;i++){
    if(i%2){
        nums[i]=ans[j--];
    }
    else{
        nums[i]=ans[k--];
    }
}
    }
};