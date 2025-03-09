class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int ans = INT_MAX;
        ranges::sort(nums);
        int n = nums.size();

        // Find the minimum sum of a mirrored pair and divide by 2
        for (int i = 0; i < n; ++i) {
            ans = min(ans, nums[i] + nums[n - i - 1]);
        }
        return ans / 2.0;
    }
};

// Time Complexity: O(n log n) due to sorting, and O(n) for the loop, so overall O(n log n).
// Space Complexity: O(1) as only a few integer variables are used.