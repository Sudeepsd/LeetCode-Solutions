// Rearrange the array by interleaving the first and second halves.

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        // Time Complexity: O(N), as we iterate through the array once.
        // Space Complexity: O(N), due to the extra storage for the result.
        vector<int> ans;
        ans.reserve(2 * n);  // Preallocate space to avoid reallocations
        for (int i = 0; i < n; ++i) {
            ans.push_back(nums[i]);
            ans.push_back(nums[i + n]);
        }
        return ans;
    }
};