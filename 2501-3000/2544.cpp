class Solution {
public:
    int alternateDigitSum(int n) {
        int ans = 0, i = 0;
        while (n) {
            int sign = i % 2 ? -1 : 1;
            ans += sign * (n % 10); // Alternating sum of digits
            n /= 10;
            ++i;
        }
        return i % 2 ? ans : -ans; // Adjust sign based on digit count
    }
};

// Time Complexity: O(d) - d is the number of digits in n  
// Space Complexity: O(1) - Uses only a few integer variables