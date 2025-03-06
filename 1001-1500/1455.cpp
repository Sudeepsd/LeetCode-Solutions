// Split the sentence into words and check if any starts with searchWord.

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        // Time Complexity: O(N), where N is the length of the sentence.
        // Space Complexity: O(1), as only a few extra variables are used.
        stringstream ss(sentence);
        string word;
        int index = 1;
        while (ss >> word) {
            if (word.find(searchWord) == 0) return index;
            ++index;
        }
        return -1;
    }
};
    