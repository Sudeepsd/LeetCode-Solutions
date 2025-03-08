class Solution {
public:
    // Counts the number of devices that can be tested before battery drains out
    int countTestedDevices(vector<int>& batteryPercentages) {
        int ans = 0;
        for (int num : batteryPercentages) {
            num -= ans;
            if (num > 0) ++ans;
        }
        return ans;
    }
};

// Time Complexity: O(n) // Iterates through the battery percentages once  
// Space Complexity: O(1) // Uses only a single integer variable  