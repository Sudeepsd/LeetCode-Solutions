class Solution {
public:
    // Count occurrences of 'letter' in 's' and compute its percentage.
    int percentageLetter(string s, char letter) {
        int n = s.length();
        int freq = 0;
        for (char c : s) {
            freq += c == letter;
        }
        return freq * 100 / n;
    }
};

// Time Complexity: O(N) - Iterates through the string once.
// Space Complexity: O(1) - Uses only a few integer variables.
