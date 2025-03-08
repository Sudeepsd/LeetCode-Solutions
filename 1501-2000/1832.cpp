class Solution {
public:
    bool checkIfPangram(string sentence) {
        if (sentence.length() < 26) return false; // Quick check for insufficient length.

        int chr[26]{}; // Array to track character presence.
        for (auto c : sentence) {
            chr[c - 'a'] = 1; // Mark character as seen.
        }

        for (int i = 0; i < 26; ++i) {
            if (chr[i] == 0) return false; // If any letter is missing, return false.
        }
        return true;
    }
};

// Time Complexity: O(N) - Iterates through the string once and checks 26 elements.
// Space Complexity: O(1) - Uses a fixed-size array of 26 elements.
