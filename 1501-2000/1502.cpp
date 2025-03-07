class Solution {
public:
    // Check if the array can form an arithmetic progression.
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();

        int d = (arr[n - 1] - arr[0]) / (n - 1);

        for (int i = 1; i < n; ++i) {
            if (arr[i] != (arr[0] + i * d)) {
                return false;
            }
        }
        return true;
    }
};

// Time Complexity: O(N log N) - Sorting takes O(N log N), and checking progression takes O(N).
// Space Complexity: O(1) - Uses only a few integer variables.