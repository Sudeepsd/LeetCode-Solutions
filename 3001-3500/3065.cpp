class Solution {
public:
    // Count elements in nums that are strictly less than k.
    int minOperations(vector<int>& nums, int k) {
        return count_if(nums.begin(), nums.end(), [k](int num) {
            return num < k;
        });
    }
};

// Time Complexity: O(n) - Single pass through the array.
// Space Complexity: O(1) - Uses only a single integer for counting.