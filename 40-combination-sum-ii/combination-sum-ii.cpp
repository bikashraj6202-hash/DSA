class Solution {
public:
    
    // bool ischeck(vector<vector<int>>&ans,vector<int>&ds){
    //    for(auto it:ans){
    //     if(it==ds){
    //         return false;
    //     }
    //    }
    //    return true;
    // }
    
    void solve(int idx,vector<vector<int>>&ans,vector<int>&arr,vector<int>&ds,int target){
         if(target==0){
                ans.push_back(ds);
                return;
            }
        if(idx==arr.size()){
            // if(target==0){
            //     ans.push_back(ds);
            
            // }
                return ;
        }

        // pick the elemnet 
        for(int i=idx;i<arr.size();i++){
            if(i>idx && arr[i]==arr[i-1])continue;

            if(arr[i]>target)break;
        if(arr[i]<=target){
            ds.push_back(arr[i]);
            solve(i+1,ans,arr,ds,target-arr[i]);
            ds.pop_back();
        }
        }
       

        // solve(idx+1,arr,ans,ds,target);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
       vector<vector<int>>ans;
       vector<int>ds;
       sort(candidates.begin(),candidates.end());
       solve(0,ans,candidates,ds,target);

       return ans;
    }
};