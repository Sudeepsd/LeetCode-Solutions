class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = 0;
        for (int i = 0; i < n; ++i) 
            ans ^= start + 2 * i; // XOR each generated number in sequence

        return ans;
    }
};

// Time Complexity: O(n) - Iterates through n elements applying XOR  
// Space Complexity: O(1) - Uses only a single integer variable