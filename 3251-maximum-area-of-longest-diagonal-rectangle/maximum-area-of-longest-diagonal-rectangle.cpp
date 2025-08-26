class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        long  n=dimensions.size();
      
         long maxi=INT_MIN;
         long ans=INT_MIN;
    
        for(long i=0;i<n;i++){
            long diago=dimensions[i][0]*dimensions[i][0]+dimensions[i][1]*dimensions[i][1];
             int area=dimensions[i][0]*dimensions[i][1];
                if(diago>maxi || (diago==maxi && area>ans)){
                    maxi=diago;
                ans=area;
                }
            }
        
        return ans ;
    }
};