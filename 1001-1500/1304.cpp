class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        for (int i = 1; i <= n / 2; ++i) {
            ans.push_back(i);
            ans.push_back(-i);
        }
        if (n & 1) ans.push_back(0);
        return ans;
    }
};

// Time Complexity: O(N) - We iterate up to N/2 and push elements into the vector.
// Space Complexity: O(N) - We store N elements in the result vector.
