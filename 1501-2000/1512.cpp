class Solution {
public:
    // Iterate through all pairs (i, j), checking if nums[i] == nums[j]. If they match, increment ans.
    int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                ans += nums[i] == nums[j];
            }
        }
        return ans;
    }
};

// Time Complexity: O(N^2) - Nested loops check all pairs.
// Space Complexity: O(1) - Uses only a single integer variable.

// Note: This can be optimized to O(N) using a frequency map