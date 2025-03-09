class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxAmt = 0;
        for (int i = 0; i < accounts.size(); ++i) {
            int amount = 0;
            for (int j = 0; j < accounts[i].size(); ++j) 
                amount += accounts[i][j]; // Sum the wealth of each customer
            
            maxAmt = max(maxAmt, amount); // Track the maximum wealth
        }
        return maxAmt;
    }
};

// Time Complexity: O(m * n) - m is the number of customers, n is the number of banks  
// Space Complexity: O(1) - Uses only a few integer variables