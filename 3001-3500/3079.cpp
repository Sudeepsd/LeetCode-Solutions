class Solution {
private:
    int encrypt(int num) {
        int maxDigit = 0, digits = 1;
        while (num) {
            maxDigit = max(maxDigit, num % 10);
            num /= 10;
            digits *= 10;
        }
        int ans = 0;
        while (digits /= 10) {
            ans += digits * maxDigit;
        }
        return ans;
    }

public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int ans = 0;
        for (int i : nums) {
            ans += encrypt(i);
        }
        return ans;
    }
};

// Time Complexity: O(n * d) - n is the size of nums, d is the number of digits in a number
// Space Complexity: O(1)