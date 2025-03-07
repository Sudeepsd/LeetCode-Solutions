class Solution {
public:
    // Compute the product and sum of digits of n, then return product - sum.
    int subtractProductAndSum(int n) {
        int product = 1, digitSum = 0;
        while (n) {
            int digit = n % 10;
            product *= digit;
            digitSum += digit;
            n /= 10;
        }

        return product - digitSum;
    }
};

// Time Complexity: O(log n) - Processes each digit of n (base 10).
// Space Complexity: O(1) - Uses only a few integer variables.