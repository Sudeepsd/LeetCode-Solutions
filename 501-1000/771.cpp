class Solution {
public:
    // Store jewel types in a set and count occurrences in the stones string.
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        unordered_set<char> jewel(jewels.begin(), jewels.end());
        for (auto stone : stones) {
            if (jewel.count(stone)) {
                ++count;
            }
        }
        return count;
    }
};

// Time Complexity: O(N + M) - Constructing the set takes O(N), and checking each stone takes O(M).
// Space Complexity: O(N) - Stores unique jewel types in an unordered_set.