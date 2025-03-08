class Solution {
public:
    // Check the middle character to determine whether to increment or decrement.
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        for (auto op : operations) {
            if (op[1] == '+') ++ans;
            else --ans;
        }
        return ans;
    }
};

// Time Complexity: O(N) - Iterates through the operations once.
// Space Complexity: O(1) - Uses only a single integer variable.