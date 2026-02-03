class Solution {
public:
    bool issafe(int row,int col,vector<vector<char>>& board,int val){
        char c='0'+val;
        for(int i=0;i<board[0].size();i++){
            // row check;
            if(board[row][i]==c){
                return false;
            }

            // col check
             if(board[i][col]==c){
                return false;
            }

            // 3*3 matrics check

            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c){
                return false;
            }
        }
        return true;
    }
    
    
    bool solve(vector<vector<char>>& board){
        int n=board[0].size();
        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                // cell empty hai 
                if(board[row][col]=='.'){
                    for(int val=1;val<=9;val++){
                        if(issafe(row,col,board,val)){
                            board[row][col]='0'+val;

                            if(solve(board)) {
                                return true;
                            }
                                board[row][col]='.';
                        }
                        
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};