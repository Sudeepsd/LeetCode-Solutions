class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        string vowels = "aeiou";
        int count = 0;

        for (int i = left; i <= right; ++i) {
            int n = words[i].length() - 1;
            if (vowels.find(words[i][0]) != string::npos 
             && vowels.find(words[i][n]) != string::npos) 
                ++count; // Increments count if both first and last characters are vowels
        }

        return count;
    }
};

// Time Complexity: O(n) - Iterates over words in the given range, checking first and last characters  
// Space Complexity: O(1) - Uses only a few extra variables 