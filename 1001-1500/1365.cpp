class Solution {
public:
    // Count how many numbers are smaller than each element.
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> arr = nums;
        sort(arr.begin(), arr.end());

        for (int i = 0; i < nums.size(); ++i) {
            int diff = lower_bound(arr.begin(), arr.end(), nums[i])
                - arr.begin();
            nums[i] = diff;
        }
        return nums;
    }
};

// Time Complexity: O(N log N) - Sorting takes O(N log N), and binary search (lower_bound) runs in O(log N) for each of the N elements.
// Space Complexity: O(N) - Stores a copy of the input array.