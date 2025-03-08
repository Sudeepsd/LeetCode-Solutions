class Solution {
public:
    int countKeyChanges(string s) {
        int count = 0;
        for (int i = 1; i < s.length(); ++i) 
            if (s[i] != s[i - 1] && abs(s[i] - s[i - 1]) != 32) 
                ++count; // Counts only when characters change without case difference
        
        return count;
    }
};

// Time Complexity: O(n) - Iterates through the string once  
// Space Complexity: O(1) - Uses only a single integer variable