class Solution {
public:
    int maxPower(string s) {
        int ans = 1, curr = 1;
        for (int i = 1; i < s.length(); ++i) {
            if (s[i] == s[i - 1]) {
                ans = max(ans, ++curr);
            } else {
                curr = 1;
            }
        }
        return ans;
    }
};

// Time Complexity: O(N) - Iterates through the string once.
// Space Complexity: O(1) - Uses only integer variables.
