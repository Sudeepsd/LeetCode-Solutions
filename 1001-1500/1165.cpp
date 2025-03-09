class Solution {
public:
    int calculateTime(string keyboard, string word) {
        int ans = 0;
        vector<int> pos(26);

        // Store the index of each character in the keyboard
        for (int i = 0; i < 26; ++i) {
            pos[keyboard[i] - 'a'] = i;
        }

        int prevIdx = 0;
        for (char c : word) {
            int idx = pos[c - 'a'];
            ans += abs(prevIdx - idx);
            prevIdx = idx;
        }
        return ans;
    }
};

// Time Complexity: O(n + 26) ≈ O(n), where n is the length of word and 26 is for initializing pos.
// Space Complexity: O(1) since the pos array is of fixed size 26.