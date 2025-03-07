class Solution {
public:
    // Iterate from 1 to n, adding numbers divisible by m to sum2 and others to sum1.
    // Return the difference sum1 - sum2.
    int differenceOfSums(int n, int m) {
        int sum1 = 0, sum2 = 0;
        for (int i = 1; i <= n; ++i) {
            if (i % m) sum1 += i;
            else sum2 += i;
        }

        return sum1 - sum2;
    }
};

// Time Complexity: O(n) - Iterates through numbers from 1 to n once.
// Space Complexity: O(1) - Uses only a few integer variables.