class Solution {
public:
    // Sum the squares of elements at positions that divide n exactly.
    int sumOfSquares(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        for (int i = 1; i <= n; ++i) {
            if (n % i == 0) {
                ans += (nums[i - 1] * nums[i - 1]);
            }
        }
        return ans;
    }
};

// Time Complexity: O(N) - Iterates through all indices from 1 to n.
// Space Complexity: O(1) - Uses only a single integer variable.
