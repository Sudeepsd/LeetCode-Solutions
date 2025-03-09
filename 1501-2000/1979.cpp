class Solution {
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a; // Compute GCD using Euclidean algorithm
}

public:
    int findGCD(vector<int>& nums) {
        int mx = ranges::max(nums);
        int mn = ranges::min(nums);
        return gcd(mx, mn); // GCD of max and min elements
    }
};

// Time Complexity: O(log(max-min)) - GCD computation using Euclidean algorithm  
// Space Complexity: O(1) - Uses only a few integer variables 