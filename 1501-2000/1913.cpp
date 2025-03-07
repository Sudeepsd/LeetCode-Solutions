class Solution {
public:
    // Find the maximum product difference: (max1 * max2) - (min1 * min2).
    int maxProductDifference(vector<int>& nums) {
        int max1 = 1, max2 = 1, min1 = 10000, min2 = 10000;

        for (int num : nums) {
            if (num > max1) {
                max2 = max1;
                max1 = num;
            } else if (num > max2) {
                max2 = num;
            }

            if (num < min1) {
                min2 = min1;
                min1 = num;
            } else if (num < min2) {
                min2 = num;
            }
        }

        return (max1 * max2) - (min1 * min2);
    }
};

// Time Complexity: O(n) - Iterates through the array once.
// Space Complexity: O(1) - Uses only a few integer variables.