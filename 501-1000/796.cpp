class Solution {
public:
    // If goal is a rotation of s, it must be a contiguous substring of s + s.
    bool rotateString(string s, string goal) {
        return s.length() == goal.length() && (s + s).find(goal) != string::npos;
    }
};

// Time Complexity: O(N) - String concatenation takes O(N), and substring search takes O(N).
// Space Complexity: O(N) - Due to the temporary concatenated string of size 2N.