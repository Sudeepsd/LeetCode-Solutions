class Solution {
public:
    int numberOfSteps(int num) {
        int ans = 0;
        while (num) {
            ++ans;
            num = num % 2 ? --num : num / 2;
        }   
        return ans;
    }
};

// Time Complexity: O(log N) - Each division by 2 reduces the number significantly.
// Space Complexity: O(1) - Uses only a single integer variable.
    