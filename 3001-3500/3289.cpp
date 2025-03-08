class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        vector<int> uSet(100);

        for (int i : nums) {
            if (++uSet[i] == 2) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};

// Time Complexity: O(N) - Single pass through the array to count occurrences.
// Space Complexity: O(1) - Uses a fixed-size array (100) for frequency counting.
