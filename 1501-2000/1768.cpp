class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int m = word1.length(), n = word2.length();
        for (int i = 0, j = 0; i < m || j < n; ++i, ++j) {
            if (i < m) ans += word1[i];
            if (j < n) ans += word2[j];            
        }
        return ans;
    }
};

// Time Complexity: O(M + N) - Iterates through both strings once.
// Space Complexity: O(M + N) - Stores the merged string.