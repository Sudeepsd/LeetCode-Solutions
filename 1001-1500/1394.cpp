// Hash table stores the count of each number, and we find the largest x 
// where the frequency matches the number itself (cnt[x] == x).

class Solution {
public:
    int findLucky(vector<int>& arr) {
        // Time Complexity: O(N), as we traverse the array twice.
        // Space Complexity: O(N), due to the unordered_map storing frequencies.
        unordered_map<int, int> freqMap;
        for (int num : arr) ++freqMap[num];

        int maxLucky = -1;
        for (auto [num, freq] : freqMap) {
            if (num == freq) maxLucky = max(maxLucky, num);
        }
        return maxLucky;
    }
};
    