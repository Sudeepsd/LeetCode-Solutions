class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int ans = -1;
        unordered_set<int> uSet;

        for (auto num : nums) {
            if (uSet.contains(-num)) {
                ans = max(ans, abs(num));
            }
            uSet.insert(num);
        }
        return ans;
    }
};

// Time Complexity: O(N) - We iterate through nums once, performing O(1) operations per element.
// Space Complexity: O(N) - We store up to N elements in the unordered_set.