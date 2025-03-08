class Solution {
public:  
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxOnes = 0, maxIdx = 0;
        for (int i = 0; i < mat.size(); ++i) {
            int curr = 0;
            for (auto col : mat[i]) {
                if (col == 1) ++curr;
            }

            if (curr > maxOnes) {
                maxOnes = curr;
                maxIdx = i;
            }
        }

        return {maxIdx, maxOnes};
    }
};

// Time Complexity: O(m * n) - Iterates through all elements in the matrix  
// Space Complexity: O(1) - Uses only a few integer variables  