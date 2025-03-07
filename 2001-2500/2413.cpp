class Solution {
public:
    // If n is even, return n itself. Otherwise, return 2 * n to make it even.
    int smallestEvenMultiple(int n) {
        return n % 2 ? 2 * n : n;
    }
};

// Time Complexity: O(1) - Single condition check and multiplication.
// Space Complexity: O(1) - Uses only a single integer parameter.    