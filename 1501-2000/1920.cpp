class Solution {
public:
    // The first loop encodes both old and new values in a single integer.
    // The second loop extracts the new values by dividing each element by n.
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        if (!n) return {};
        for (int i = 0; i < n; ++i) {
            nums[i] += (nums[nums[i] % n] % n) * n;
        }

        for (int i = 0; i < n; ++i) {
            nums[i] /= n;
        }
        return nums;
    }
};

// Time Complexity: O(N) - Iterates through the array twice.
// Space Complexity: O(1) - Modifies the array in place without extra space.