class Solution {
public:
    // We check the parity by summing the column and row indices.
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int a1 = ((coordinate1[0] - 'a') + coordinate1[1]) % 2;
        int a2 = ((coordinate2[0] - 'a') + coordinate2[1]) % 2;
        return a1 == a2;
    }
};

// Time Complexity: O(1) - Performs a constant number of operations.
// Space Complexity: O(1) - Uses only a few integer variables.
