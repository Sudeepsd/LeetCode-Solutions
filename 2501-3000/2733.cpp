class Solution {
public:
    // If nums has less than 3 elements, return -1 (no valid middle value).
    // Otherwise, find the second smallest or second largest element in O(n).
    int findNonMinOrMax(vector<int>& nums) {
        if (nums.size() < 3) return -1;
        int min1 = INT_MAX, max1 = INT_MIN, mid = INT_MAX;
        
        for (int num : nums) {
            if (num < min1) {
                mid = min1;
                min1 = num;
            } else if (num > max1) {
                mid = max1;
                max1 = num;
            } else {
                mid = num;
            }
        }
        
        return mid;
    }
};

// Time Complexity: O(n) - Single pass through the array.
// Space Complexity: O(1) - Uses only a few integer variables.
    