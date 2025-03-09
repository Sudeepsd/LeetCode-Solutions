class Solution {
private:
    int digitSum(int num) {
        int digit = 0;
        while (num) {
            digit += num % 10; // Sum up the digits
            num /= 10;
        }
        return digit;
    }

public:
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;
        for (int num : nums) 
            ans = min(ans, digitSum(num)); // Find the minimum digit sum

        return ans;
    }
};

// Time Complexity: O(n * d) - Where n is the size of nums and d is the number of digits in the largest number  
// Space Complexity: O(1) - Uses only a few integer variables  