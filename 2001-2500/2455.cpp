class Solution {
public:
    // Compute the average of numbers divisible by 6.
    int averageValue(vector<int>& nums) {
        int count = 0, sum = 0;
        for (int num : nums) {
            if (num % 6 == 0) {
                ++count;
                sum += num;
            }
        }
        return count ? sum / count : 0;
    }
};

// Time Complexity: O(n) - Iterates through the array once.
// Space Complexity: O(1) - Uses only two integer variables.