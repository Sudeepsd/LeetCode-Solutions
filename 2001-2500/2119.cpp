class Solution {
public:
    bool isSameAfterReversals(int num) {
        return num % 10 || !num; // True if num has non-zero last digit or is zero
    }
};

// Time Complexity: O(1) - Constant time check  
// Space Complexity: O(1) - No extra space used  