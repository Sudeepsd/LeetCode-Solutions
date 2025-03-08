class Solution {
public:
    // Computes XOR of all duplicate numbers appearing exactly twice in the array
    int duplicateNumbersXOR(vector<int>& nums) {
        int ans = 0;
        int count[51]{};  

        for (int num : nums) {
            if (++count[num] == 2) ans ^= num;
        }
        return ans;
    }
};

// Time Complexity: O(n) - Iterates through the array once  
// Space Complexity: O(1) - Uses a fixed-size array for counting  
