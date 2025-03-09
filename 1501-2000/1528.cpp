class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = indices.size();
        string ans(n, '\0');

        // Place each character at its correct position
        for (int i = 0; i < n; ++i) {
            ans[indices[i]] = s[i];
        }
        return ans;
    }
};

// Time Complexity: O(n) since we iterate through the indices once.
// Space Complexity: O(n) due to the additional string used for reconstruction.