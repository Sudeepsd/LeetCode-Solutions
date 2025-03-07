class Solution {
public:
    // Count pairs (i, j) where (hours[i] + hours[j]) is a multiple of 24.
    int countCompleteDayPairs(vector<int>& hours) {
        int count = 0;
        for (int i = 0; i < hours.size(); ++i) {
            for (int j = i + 1; j < hours.size(); ++j) {
                if ((hours[i] + hours[j]) % 24 == 0) {
                    ++count;
                }
            }
        }
        return count;
    }
};

// Time Complexity: O(n^2) - Checks all pairs in a nested loop.
// Space Complexity: O(1) - Uses only a single integer variable.