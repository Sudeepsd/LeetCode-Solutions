// Start from the bottom-left corner and move right. 
// If a negative number is found, all elements above it in that column are also negative.

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        // Time Complexity: O(M + N), since we traverse at most M rows and N columns.
        // Space Complexity: O(1), as we use only a few extra variables.
        int count = 0, m = grid.size(), n = grid[0].size();
        int i = m - 1;
        for (int j = 0; j < n; ++j) {
            while (i >= 0 && grid[i][j] < 0) --i;
            count += m - i - 1;
        }
        return count;
    }
};