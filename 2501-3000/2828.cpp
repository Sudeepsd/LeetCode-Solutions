class Solution {
public:
    // Check if s is an acronym formed by taking the first letter of each word in words.
    bool isAcronym(vector<string>& words, string s) {
        if (words.size() != s.length()) return false;

        for (int i = 0; i < s.length(); ++i) {
            if (words[i][0] != s[i]) {
                return false;
            }
        }   
        return true;
    }
};

// Time Complexity: O(N) - Iterates through all words once.
// Space Complexity: O(1) - Uses only constant extra space.