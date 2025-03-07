class Solution {
public:
    // Compute the nth Tribonacci number using constant space optimization.
    int tribonacci(int n) {
        vector<int> tri{0, 1, 1};
        for (int i = 3; i <= n; ++i) tri[i % 3] = tri[0] + tri[1] + tri[2];

        return tri[n % 3];
    }
};

// Time Complexity: O(n) - Iterates from 3 to n once.
// Space Complexity: O(1) - Uses only three integer values in a vector.
    