class Solution {
public:
    // Check if adjacent elements have alternating parity.
    bool isArraySpecial(vector<int>& nums) {
        for (int i = 1; i < nums.size(); ++i) {
            if ((nums[i] + nums[i - 1]) % 2 == 0) {
                return false;
            }
        }
        return true;
    }
};

// Time Complexity: O(N) - Iterates through the array once.
// Space Complexity: O(1) - Uses only a few integer variables.
