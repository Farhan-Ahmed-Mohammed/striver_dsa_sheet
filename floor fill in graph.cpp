class Solution {
public:
    void dfs(int row,int col,int start,vector<vector<int>> &image,int color,vector<vector<int>> &ans,vector<vector<bool>> &vis)
    {
        vis[row][col]=true;
        if(ans[row][col]!=start)
        {
            return;
        }
       
         ans[row][col]=color;
         
        if(row-1>=0 && vis[row-1][col]==false)
        {
            dfs(row-1,col,start,image,color,ans,vis);
        }

         if(row+1<image.size() && vis[row+1][col]==false)
        {
            dfs(row+1,col,start,image,color,ans,vis);
        }

         if(col-1>=0 && vis[row][col-1]==false)
        {
            dfs(row,col-1,start,image,color,ans,vis);
        }

         if(col+1<image[0].size() && vis[row][col+1]==false)
        {
            dfs(row,col+1,start,image,color,ans,vis);
        }

        return;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans=image;
        int start=image[sr][sc];
        vector<vector<bool>> vis(image.size(),vector<bool>(image[0].size(),false));
        dfs(sr,sc,start,image,color,ans,vis);
        return ans;
        
    }
};
