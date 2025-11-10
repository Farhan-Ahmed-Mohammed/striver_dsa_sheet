class Solution {
public:
    vector<vector<string>> ans;
    void solve(vector<string> &board,int row,int n)
    {
        if(row==n)
        {
            ans.push_back(board);
            return;
        }
        
            for(int col=0;col<n;col++)
            {
                 if(safe(board,row,col,n))
                {
                    board[row][col]='Q';
                    solve(board,row+1,n);
                    board[row][col]='.'; //back tracking
                }
            }
        
 
    }

    bool safe(vector<string> &board,int row,int col,int n)
    {
        
        //checking column
        for(int i=0;i<n;i++)
        {
            if(board[i][col]!='.')
            {
                return false;
            }
        }

        //checking top-left diagonal
        int i=row-1;
        int j=col-1;
        while(i>=0 && j>=0)
        {
            if(board[i][j]!='.')
            {
                return false;
            }
            i--;
            j--;
        }

        //checking the top right diagonal

         i=row-1;
         j=col+1;
        while(i>=0 && j<n)
        {
            if(board[i][j]!='.')
            {
                return false;
            }
            i--;
            j++;
        }

        return true;

    }

    vector<vector<string>> solveNQueens(int n) {
      vector<string> board;        // create an empty vector

        for (int i = 0; i < n; i++)  // for each row
        {
            string row = "";          // start with an empty string
            for (int j = 0; j < n; j++)  // for each column
            {
                row += '.';           // add a dot
            }
            board.push_back(row);     // add this row to the board
        }

       solve(board,0,n);
       return ans;
    }
};
