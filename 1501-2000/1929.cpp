class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // Time Complexity: O(N), as we iterate through the array once.
        // Space Complexity: O(1), since we modify the input array in-place.
        int n = nums.size();
        nums.resize(2 * n);
        for (int i = 0; i < n; ++i) 
            nums[i + n] = nums[i];
        return nums;
    }
};