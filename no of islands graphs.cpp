class Solution {
public:
    void dfs(int row,int col,vector<vector<char>> &grid,vector<vector<bool>> &vis)
    {
        vis[row][col]=true;

        if(grid[row][col]=='0')
        {
            return;
        }

        if(row-1>=0 && vis[row-1][col]==false)
        {
            dfs(row-1,col,grid,vis);
        }

        if(row+1<grid.size() && vis[row+1][col]==false)
        {
            dfs(row+1,col,grid,vis);
        }
       
         if(col-1>=0 && vis[row][col-1]==false)
        {
            dfs(row,col-1,grid,vis);
        }
        

         if(col+1<grid[0].size() && vis[row][col+1]==false)
        {
            dfs(row,col+1,grid,vis);
        }
        

    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size(); //row 
        int m=grid[0].size(); //col
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        int cnt=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]=='1' && vis[i][j]==false)
                {
                    dfs(i,j,grid,vis);
                    cnt++;
                }
            }
        }

        return cnt;
    }
};
