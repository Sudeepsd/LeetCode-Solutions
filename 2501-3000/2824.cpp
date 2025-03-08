class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0; 
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                count += (nums[i] + nums[j] < target);
            }
        }
        return count;
    }
};

// Time Complexity: O(N^2) - Nested loop iterating over all pairs.
// Space Complexity: O(1) - Uses only an integer counter.
