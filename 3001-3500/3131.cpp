class Solution {
public:
    // Since every element in nums1 has x added to form nums2, the difference between their minimum values gives x.
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int min1 = *min_element(nums1.begin(), nums1.end());
        int min2 = *min_element(nums2.begin(), nums2.end());

        return min2 - min1;
    }
};

// Time Complexity: O(N) - Finding the minimum element in each array takes O(N).
// Space Complexity: O(1) - Uses only a few integer variables.
