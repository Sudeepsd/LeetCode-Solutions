class Solution {
public:
    // Find indices where target appears in the sorted array.
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int lb = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int ub = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        for (; lb < ub; ++lb) {
            ans.push_back(lb);
        }
        return ans;
    }
};

// Time Complexity: O(N log N) - Sorting takes O(N log N), and binary search runs in O(log N) for bounds.
// Space Complexity: O(1) - Uses only a few integer variables, modifying input in place.