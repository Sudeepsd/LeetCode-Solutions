class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        
        // Find the first occurrence of 0 (lower bound)
        int lb = lower_bound(nums.begin(), nums.end(), 0) - nums.begin();
        
        // Find the first positive number (upper bound of 0)
        int ub = upper_bound(nums.begin(), nums.end(), 0) - nums.begin();
        
        // Return the maximum count between negative and positive numbers
        return max(lb, n - ub);
    }
};

// Time Complexity: O(log n) due to binary search operations.
// Space Complexity: O(1) as only a few integer variables are used.