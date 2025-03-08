class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;
        int idx;
        if (ruleKey == "type") idx = 0;
        else if (ruleKey == "color") idx = 1;
        else idx = 2; // Maps ruleKey to the corresponding index for direct comparison

        for (auto& item : items)
            if (ruleValue == item[idx])
                ++count; // Increments count when the item's attribute matches ruleValue
        
        return count;
    }
};

// Time Complexity: O(n) - Iterates through all items once  
// Space Complexity: O(1) - Uses only a few integer variables  