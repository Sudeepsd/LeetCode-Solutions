class Solution {
public:
    string getEncryptedString(string s, int k) {
        k %= s.length();; // Handles cases where k is larger than the string length

        reverse(s.begin(), s.begin() + k); // Reverse the first k characters
        reverse(s.begin() + k, s.end()); // Reverse the remaining characters
        reverse(s.begin(), s.end()); // Reverse the entire string to complete the rotation

        return s;
    }
};

// Time Complexity: O(n) - Each reverse operation is O(n), but in total, it remains O(n)  
// Space Complexity: O(1) - Modifies the string in place without extra space  
