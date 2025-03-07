class Solution {
public:
    // If the sums based on whether they are < 10 or ≥ 10 are different, Alice wins (true), otherwise, she loses (false).
    bool canAliceWin(vector<int>& nums) {
        int num1 = 0, num10 = 0;

        for (int i : nums) {
            if (i < 10) num1 += i;
            else num10 += i;
        }

        return num1 != num10;
    }
};

// Time Complexity: O(N) - Single pass through the array.
// Space Complexity: O(1) - Uses only two integer variables.
