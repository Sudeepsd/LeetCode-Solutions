class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // Time Complexity: O(N), as we iterate through the array once.
        // Space Complexity: O(1), since modifications are done in-place.
        for (int i = 1; i < nums.length(); ++i) 
            nums[i] += nums[i - 1];
        return nums;
    }
};
    