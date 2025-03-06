// We compute prefix sums and count how many times the sum reaches zero.

class Solution {
    public:
        int returnToBoundaryCount(vector<int>& nums) {
            // Time Complexity: O(N), as we iterate through the array twice.
            // Space Complexity: O(1), since modifications are done in-place.
            for (int i = 1; i < nums.size(); ++i) 
                nums[i] += nums[i - 1];
            return count_if(nums.begin(), nums.end(), [](int x) { return x == 0; });
        }
    };