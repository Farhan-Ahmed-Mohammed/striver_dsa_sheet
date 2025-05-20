class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       int n = matrix.size(); // Number of rows
        if (n == 0) return; // Handle edge case of empty matrix

        // Transpose the matrix
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Reverse each row
        for (int i = 0; i < n; ++i) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
  
        
    }
};
