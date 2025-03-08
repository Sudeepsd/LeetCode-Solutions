class Solution {
public:
    // Count words that start with the given prefix.
    int prefixCount(vector<string>& words, string pref) {
        return count_if(words.begin(), words.end(), [&](const string& word) {
            return word.find(pref) == 0;
        });
    }
};

// Time Complexity: O(N * M) - N is the number of words, and M is the length of the prefix (worst case).
// Space Complexity: O(1) - Uses only a constant amount of extra space.
