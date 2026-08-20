class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& r) {
    //     vector<vector<int>>ans(n,vector<int>(10,0));
    //    for(int i=0;i<r.size();i++){
    //     ans[r[i][0]-1][r[i][1]-1]=-1;
    //    }
    // //    for(int i=0;i<n;i++){
    // //     for(int j=0;j<10;j++){
    // //         cout<<ans[i][j]<<" ";
    // //     }
    // //     cout<<"\n";
    // //    }

    //     int count=0;
    //     for(int i=0;i<n;i++){
    //       bool q1=true;
    //       // left side se delho  1 2 3 4 
    //       for(int  j=1;j<5;j++){
    //         if(ans[i][j]==-1){
    //             q1=false;
    //             break;
    //         }
    //       }
    //       bool q2=true;
    //       // left side se delho  6,7 8 9
    //       for(int  j=5;j<9;j++){
    //         if(ans[i][j]==-1){
    //             q2=false;
    //             break;
    //         }
    //       }

    //       if(q1 && q2)count+=2;
    //       else if(q1 || q2)count++;
    //       else{
    //         //4 5 6 7
    //        bool q3=true;
    //       // left side se delho  4 5 6 7 
    //       for(int  j=3;j<7;j++){
    //         if(ans[i][j]==-1){
    //             q3=false;
    //             break;
    //         }
    //       }
    //       if(q3)count++;
    //       }
    //     }
    //     return count;


    unordered_map<int,vector<int>>mp;
    for(auto it:r){
        mp[it[0]].push_back(it[1]);
    }
    int count=(n-mp.size())*2;
    for(auto &x:mp){
        vector<int>&seats=x.second;
        bool left=true,right=true ,mid=true;

        for(auto &seat: seats){
            if(seat>=2 && seat<=5){
                left=false;
            }
              if(seat>=4 && seat<=7){
                mid=false;
            }
              if(seat>=6 && seat<=9){
                right=false;
            }
        }
        if(left && right)count+=2;
        else if(left ||right)count++;
        else{
            if(mid)count++;
        }
    }
    return count;
    }
};