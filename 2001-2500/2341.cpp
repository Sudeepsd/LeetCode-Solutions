class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int> freqMap;
        for (int num : nums) {
            ++freqMap[num]; // Count occurrences
        }   

        int pairs = 0, leftovers = 0;
        for (auto [_, count] : freqMap) {
            pairs += count / 2; // Count pairs
            leftovers += count % 2; // Count remaining elements
        }
        return {pairs, leftovers};
    }
};

// Time Complexity: O(n) - Iterates through nums and freqMap once  
// Space Complexity: O(n) - Stores frequencies in an unordered_map