class Solution {
public:
    string finalString(string s) {
        string ans = "";
        for (char c : s) {
            if (c == 'i') {
                ranges::reverse(ans);
            } else {
                ans += c;
            }
        }
        return ans;
    }
};

// Time Complexity: O(n) - Reversing is amortized O(n) over all 'i' occurrences
// Space Complexity: O(n) - To store the answer