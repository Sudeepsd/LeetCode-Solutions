class Solution {
public:
    int findNumbers(vector<int>& nums) {
        // Time Complexity: O(N * logM), where N is the number of elements and logM is the number of digits in the largest number.
        // Space Complexity: O(1), since we use only a few extra variables.
        return count_if(nums.begin(), nums.end(), [](int num) {
            return to_string(num).size() % 2 == 0;
        });
    }
};