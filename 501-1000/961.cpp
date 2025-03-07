class Solution {
public:
    // Since only one element appears N times in the 2N array, it must be repeated at least once.
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int> uniqueSet;
        for (int i = 0; i < nums.size(); ++i) {
            if (uniqueSet.count(nums[i])) {
                return nums[i];
            }
            uniqueSet.insert(nums[i]);
        }
        return 0;
    }
};

// Time Complexity: O(N) - Iterates through the array once.
// Space Complexity: O(N) - Uses a hash set to store unique elements.
