class Solution {
public:
    
    void addsol(vector<vector<int>>&board,vector<vector<string>>&ans,int n){
        vector<string>temp;
        for(int i=0;i<n;i++){
             string s="";
            for(int j=0;j<n;j++){
               if(board[i][j]==1){
               s.push_back('Q');
               }
               else{
                s.push_back('.');
               }
            }
            temp.push_back(s);
        }
        ans.push_back(temp);
    }


    bool issafe(int row,int col,vector<vector<int>>&board,int n){
        int x=row;
        int y=col;
        while(y>=0){
            if(board[x][y]==1){
                return false;
            }
            y--;
        }

        x=row;
        y=col;
        while(x>=0 && y>=0){
            if(board[x][y]==1){
                return false;
            }
            x--;
            y--;
        }
        x=row;
        y=col;
        while(x<n && y>=0){
            if(board[x][y]==1){
                return false;
            }
            x++;
            y--;
        }
        return true;
    }
    
    void solve(int col,vector<vector<string>>&ans,vector<vector<int>>&board,int n){
        // base condition
        if(col==n){
            addsol(board,ans,n);
              return;
        }

        // we have to solve only one condition

        for(int row=0;row<n;row++){
            if(issafe(row,col,board,n)){
                board[row][col]=1;
                solve(col+1,ans,board,n);
                board[row][col]=0;
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<vector<int>>board(n,vector<int>(n,0));
        solve(0,ans,board,n);
        return ans;
    }
};