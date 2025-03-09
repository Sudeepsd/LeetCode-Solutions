class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        int minDiff = INT_MAX;

        ranges::sort(arr);

        // Find the minimum absolute difference
        for (int i = 1; i < arr.size(); ++i) {
            minDiff = min(minDiff, arr[i] - arr[i - 1]);
        }

        // Collect pairs with the minimum absolute difference
        for (int i = 1; i < arr.size(); ++i) {
            if (arr[i] - arr[i - 1] == minDiff) {
                ans.push_back({arr[i - 1], arr[i]});
            }
        }
        return ans;
    }
};

// Time Complexity: O(n log n) due to sorting, and O(n) for finding and collecting pairs, so overall O(n log n).
// Space Complexity: O(n) in the worst case for storing the answer.