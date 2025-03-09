class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max1 = -1, max2 = -1;
        int maxIdx = -1;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > max1) {
                max2 = max1; // Track second largest
                max1 = nums[i];
                maxIdx = i;
            } else if (nums[i] > max2) {
                max2 = nums[i];
            }
        }

        return max1 >= 2 * max2 ? maxIdx : -1; // Check dominance condition
    }
};

// Time Complexity: O(n) - Single pass to find max1 and max2
// Space Complexity: O(1) - Uses constant extra space