class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freqMap;
        unordered_set<int> freqSet;

        // Count occurrences of each number
        for (int num : arr) {
            ++freqMap[num];
        }

        // Check if all occurrence counts are unique
        for (const auto& [_, count] : freqMap) {
            if (freqSet.count(count)) {
                return false;
            }
            freqSet.insert(count);
        }
        return true;
    }
};

// Time Complexity: O(n) since we iterate through the array and map once.
// Space Complexity: O(n) due to storing frequency counts and unique occurrences.