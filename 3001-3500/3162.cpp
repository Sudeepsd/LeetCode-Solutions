class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int count = 0;
        for (int i = 0; i < nums1.size(); ++i) {
            for (int j = 0; j < nums2.size(); ++j) {
                if (nums1[i] % (nums2[j] * k) == 0)
                    ++count;
            }
        }
        return count;
    }
};

// Time Complexity: O(N * M) - We check each pair (i, j) in a nested loop.
// Space Complexity: O(1) - No extra space is used.