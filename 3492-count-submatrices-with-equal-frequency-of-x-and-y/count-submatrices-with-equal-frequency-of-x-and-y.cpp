class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
       // vector<vector<pair<int,int>>> dp(grid.size(),vector<int>(grid[0].size(),{0,0}))
        
        // for(int i=1;i<grid[0].size();i++){
        //     if(grid[i]=='X'){
        //         dp[i].first=dp[i-1].first+1;
        //         dp[i].second=dp[i-1].second;
        //     }
        //     else if(grid[i]=='Y'){
        //         dp[i].first=dp[i-1].first;
        //         dp[i].second=dp[i-1].second=1;
        //     }
        //     else{
        //         dp[i].first=dp[i-1].first;
        //         dp[i].second=dp[i-1].second;
        //     }
        // }





        vector<vector<int>> temp(grid.size(),vector<int>(grid[0].size(),0));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]=='X') temp[i][j]=1;
                else if(grid[i][j]=='Y') temp[i][j]=-1;
                else temp[i][j]=0;
            }
        }
        
        vector<vector<int>> kj(grid.size(),vector<int>(grid[0].size(),0));
        kj[0][0]=temp[0][0];
        bool check=false;
        if(temp[0][0]==1) check=true;
        if(check) temp[0][0]=2;
        for(int i=1;i<grid.size();i++){
            kj[i][0]=kj[i-1][0]+temp[i][0];
            if(temp[i][0]==1 || check) {
                check=true;
            }
            if(check)temp[i][0]=2;
        }
        check=false;
        if(grid[0][0]=='X') check=true;
        for(int i=1;i<grid[0].size();i++){
            kj[0][i]=kj[0][i-1]+temp[0][i];
            if(temp[0][i]==1 || check) {
                check=true;
            }
            if(check)temp[0][i]=2;
        } 
        for(int i=1;i<grid.size();i++){
            if(temp[i][0]==2) check=true;
            else check=false;
            for(int j=1;j<grid[i].size();j++){
                kj[i][j]=kj[i-1][j]+kj[i][j-1]-kj[i-1][j-1] +temp[i][j];
                
                if(temp[i][j]==1 || check || temp[i-1][j]==2){
                    temp[i][j]=2;
                    check=true;
                }
            }
        }
        int ans=0;
        for(int i=0;i<kj.size();i++){
            for(int j=0;j<kj[0].size();j++){
                if(kj[i][j]==0 && temp[i][j]==2) ans++; 
            }
        }
        // for(int i=0;i<kj.size();i++){
        //     for(int j=0;j<kj[0].size();j++){
        //         cout<<kj[i][j]<<" ";  
        //     }
        //     cout<<endl;
        // }
        // for(int i=0;i<kj.size();i++){
        //     for(int j=0;j<kj[0].size();j++){
        //         cout<<temp[i][j]<<" "; 
        //     }
        //     cout<<endl;
        // }
        return ans;










    }
};