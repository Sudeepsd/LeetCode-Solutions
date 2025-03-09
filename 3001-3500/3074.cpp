class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int appleSum = accumulate(apple.begin(), apple.end(), 0);
        ranges::sort(capacity, greater<>());

        int sum = 0;
        
        // Select the smallest number of boxes until the capacity meets or exceeds appleSum
        for (int i = 1; ; ++i) {
            sum += capacity[i - 1];
            if (sum >= appleSum) {
                return i;
            }
        }
        return 0; // This line is unreachable but added for completeness
    }
};

// Time Complexity: O(n log n) due to sorting, and O(n) for accumulation, so overall O(n log n).
// Space Complexity: O(1) as only a few integer variables are used.