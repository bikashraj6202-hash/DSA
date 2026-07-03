class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low=0;
        int n=fruits.size();
        if(n<=2)return n;
        unordered_map<int,int>mp;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            mp[fruits[i]]++;
            if(mp.size()>2){
                mp[fruits[low]]--;
                if(mp[fruits[low]]==0)mp.erase(fruits[low]);
                low++;
            }
            if(mp.size()<=2){
                maxi=max(maxi,i-low+1);
            }
        }
        return maxi==INT_MIN ?-1:maxi;
    }
};