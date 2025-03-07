class Solution {
public:
    // Calculate the sum of absolute differences between adjacent characters.
    int scoreOfString(string s) {
        int ans = 0;
        for (int i = 1; i < s.length(); ++i) {
            ans += abs(s[i] - s[i - 1]);
        }
        return ans;
    }
};

// Time Complexity: O(N) - Iterates through the string once.
// Space Complexity: O(1) - Uses only a single integer variable.
