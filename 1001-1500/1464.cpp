class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // Time Complexity: O(N), as we iterate through the array once.
        // Space Complexity: O(1), since only a few variables are used.
        int max1 = -1, max2 = -1;
        for (int num : nums) {
            if (num > max1) {
                max2 = max1;
                max1 = num;
            } else if (num > max2) {
                max2 = num;
            }
        }
        return (max1 - 1) * (max2 - 1);
    }
};