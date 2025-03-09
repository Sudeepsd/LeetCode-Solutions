class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();

        for (int col = 0; col < n; ++col) {
            int mx = -1;
            for (int row = 0; row < m; ++row) 
                mx = max(mx, matrix[row][col]); // Find max value in the column

            for (int row = 0; row < m; ++row) 
                if (matrix[row][col] == -1) 
                    matrix[row][col] = mx; // Replace -1 with the max value of the column
        }

        return matrix;
    }
};

// Time Complexity: O(m * n) - Each element is visited twice, once for max and once for replacement  
// Space Complexity: O(1) - Modifies the matrix in place  