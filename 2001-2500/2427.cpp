class Solution {
private:
    // Uses Euclidean Algorithm to find GCD of two numbers.
    int gcd(int a, int b) {
        if (a < b) swap(a, b);
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

public:
    // Instead of checking divisibility for both a and b, we only check for their GCD.
    int commonFactors(int a, int b) {
        int count = 0;
        int g = gcd(a, b);
        for (int i = 1; i <= g; ++i) {
            if (g % i == 0) ++count;
        }   
        return count;
    }
};

// Time Complexity: O(log(min(a, b)) + sqrt(g)) - GCD takes O(log min(a, b)), factor check takes O(sqrt g)  
// Space Complexity: O(1) - Uses only a few integer variables  