class Solution {
public:
    // Find the first character that appears more than once in the string.
    char repeatedCharacter(string s) {
        unordered_set<char> chr;
        for (auto c : s) {
            if (chr.count(c)) {
                return c;
            }
            chr.insert(c);
        }
        return 0;
    }
};

// Time Complexity: O(N) - Iterates through the string once.
// Space Complexity: O(1) - Uses at most 26 characters in the unordered_set.
