class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int prevIdx = -k - 1;

        // Check if each '1' is at least k distance apart
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 1) {
                if (i - prevIdx <= k) {
                    return false;
                }
                prevIdx = i;
            }
        }
        return true;
    }
};

// Time Complexity: O(n) since we iterate through the array once.
// Space Complexity: O(1) as only a few integer variables are used.