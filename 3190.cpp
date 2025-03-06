// If a number is not a multiple of 3, exactly one operation is needed to make it a multiple of 3.
// Hence, the number of operations is equal to the count of non-multiples of 3.

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        // Time Complexity: O(N), as we traverse the array once.
        // Space Complexity: O(1), since we use only a few extra variables.
        return count_if(nums.begin(), nums.end(), [](int num) { return num % 3; });
    }
};
    