class Solution {
public:
    bool isSubstringPresent(string s) {
        unordered_set<string> substrings;
        
        for (int i = 0; i < s.length() - 1; ++i) 
            substrings.insert(s.substr(i, 2));

        for (int i = 1; i < s.length(); ++i) {
            if (substrings.find(string(1, s[i]) + s[i - 1]) != substrings.end()) 
                return true;
        }

        return false;
    }
};

// Time Complexity: O(n) // Each substring insertion and lookup in an unordered_set is O(1), iterates n times  
// Space Complexity: O(n) // Stores at most n-1 substrings in the unordered_set  