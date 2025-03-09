class Solution {
public:
    int sumOfMultiples(int n) {
        int sum = 0;
        for (int i = 3; i <= n; ++i) 
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) 
                sum += i; // Add numbers divisible by 3, 5, or 7

        return sum;
    }
};

// Time Complexity: O(n) - Iterates through numbers from 3 to n  
// Space Complexity: O(1) - Uses only a single integer variable  