class Solution {
int letterValue(string& s) {
    int ans = 0;
    for (char c : s) {
        ans *= 10;
        ans += c - 'a'; // Convert character to corresponding digit
    }
    return ans;
}

public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        return letterValue(firstWord) + letterValue(secondWord) == letterValue(targetWord);
    }
};

// Time Complexity: O(n) - Iterates over each character of the strings  
// Space Complexity: O(1) - Uses only a few integer variables