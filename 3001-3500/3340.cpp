class Solution {
public:
    bool isBalanced(string num) {
        int sum1 = 0, sum0 = 0;
        for (int i = 0; i < num.length(); ++i) {
            if (i & 1) sum1 += num[i] - '0';
            else sum0 += num[i] - '0';
        }
        return sum1 == sum0;
    }
};

// Time Complexity: O(n) - n is the length of num
// Space Complexity: O(1)