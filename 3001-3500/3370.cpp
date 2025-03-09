class Solution {
public:
    int smallestNumber(int n) {
        int ans = 1;

        // Keep doubling and adding 1 until ans >= n
        while (ans < n) {
            ans = ans * 2 + 1;
        }
        
        return ans;
    }
};

// Time Complexity: O(log n) since ans approximately doubles in each step.
// Space Complexity: O(1) as only a few integer variables are used.