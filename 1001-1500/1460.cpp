class Solution {
public:
    // We can make any combination by reversing sub-arrays,
    // but for two arrays to be equal, they must have the same elements.
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        ranges::sort(target);
        ranges::sort(arr);
        return target == arr;
    }
};

// Time Complexity: O(n log n) - Sorting complexity.
// Space Complexity: O(1) - Sorting is done in-place.

// Note: You can get an even more optimized solution using frequency counting (O(n) time)
