// Use two pointers to fill the result array with squared values in sorted order.

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // Time Complexity: O(N), as we iterate through the array once.
        // Space Complexity: O(N), due to the extra result array.
        int n = nums.size();
        vector<int> ans(n);
        
        for (int i = 0, j = n - 1, k = n - 1; k >= 0; --k) {
            if (nums[i] * nums[i] > nums[j] * nums[j]) {
                ans[k] = nums[i] * nums[i];
                ++i;
            } else {
                ans[k] = nums[j] * nums[j];
                --j;
            }
        }
        return ans;
    }
};
    