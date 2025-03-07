class Solution {
public:
    // Compute the sum of absolute differences between character positions in s and t.
    int findPermutationDifference(string s, string t) {
        int ans = 0;
        unordered_map<int, int> mapFreq;

        for (auto i = 0; i < s.length(); ++i) 
            mapFreq[s[i]] = i;

        for (int i = 0; i < t.length(); ++i) {
            ans += abs(mapFreq[t[i]] - i);
        }
        return ans;
    }
};

// Time Complexity: O(N) - One pass to store positions and one pass to compute the difference.
// Space Complexity: O(N) - Stores character positions in an unordered_map.
