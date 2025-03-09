class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> uMap;
        for (char c : text) 
            ++uMap[c]; // Count occurrences of each character

        int ans = INT_MAX;
        ans = min(ans, uMap['b']);
        ans = min(ans, uMap['a']);
        ans = min(ans, uMap['l'] / 2); // 'l' appears twice in "balloon"
        ans = min(ans, uMap['o'] / 2); // 'o' appears twice in "balloon"
        ans = min(ans, uMap['n']);

        return ans == INT_MAX ? 0 : ans;
    }
};

// Time Complexity: O(n) - Single pass to count characters, constant operations afterward  
// Space Complexity: O(1) - Stores at most 26 