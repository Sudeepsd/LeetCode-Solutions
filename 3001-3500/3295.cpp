class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        int count = 0;
        unordered_set<string> bannedSet(bannedWords.begin(), bannedWords.end());

        // Count occurrences of banned words and return true if more than one is found
        for (const string& word : message) {
            if (bannedSet.count(word) && ++count > 1) {
                return true;
            }
        }
        return false;
    }
};

// Time Complexity: O(m + n), where m is the number of words in message and n is the number of banned words.
// Space Complexity: O(n) due to storing banned words in an unordered_set.