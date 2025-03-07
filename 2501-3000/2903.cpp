class Solution {
    public:
        // brute-force approach checks all valid index pairs and returns the first match.
        vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
            for (int i = 0; i < nums.size(); ++i) {
                for (int j = i + indexDifference; j < nums.size(); ++j) {
                    if (abs(nums[i] - nums[j]) >= valueDifference) {
                        return {i, j};
                    }
                }
            }
            return {-1, -1};
        }
    };
    
    // Time Complexity: O(N^2) - Nested loops checking all valid index pairs.
    // Space Complexity: O(1) - Uses only a constant number of extra variables.
    