class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int ans = 0;
        for (int i = 1; i < nums.size(); ++i) {
            ans = max(ans, abs(nums[i] - nums[i - 1])); // Track max adjacent difference
        }
        return max(ans, abs(nums[nums.size() - 1] - nums[0])); // Include circular case
    }
};

// Time Complexity: O(n) - Iterates through the array once  
// Space Complexity: O(1) - Uses only a few integer variables  