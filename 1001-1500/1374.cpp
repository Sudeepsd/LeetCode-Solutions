class Solution {
public:
    // Generate a string where all characters have an odd frequency.
    string generateTheString(int n) {
        string ans(n, 'a');
        if (n % 2 == 0) ans[0] = 'b';
        return ans;
    }
};

// Time Complexity: O(N) - Constructs a string of size N.
// Space Complexity: O(N) - Stores the resulting string.
