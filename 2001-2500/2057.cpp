class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == i % 10) {
                return i;
            }
        }
        return -1;
    }
};

// Time Complexity: O(N) - We traverse the array once, checking each element.
// Space Complexity: O(1) - No extra space is used.