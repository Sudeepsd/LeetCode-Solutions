class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sorts the array in ascending order
        for (int i = 0; i < nums.size(); i += 2) {
            swap(nums[i], nums[i + 1]); // Swap adjacent elements
        }
        return nums;
    }
};

// Time Complexity: O(n log n) - Sorting dominates the complexity  
// Space Complexity: O(1) - Sorting is in-place, using constant extra space