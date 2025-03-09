class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> count;
        for (int i : arr1) {
            ++count[i]; // Count occurrences of each element in arr1
        }

        vector<int> ans;
        for (int i : arr2) {
            while (count[i]-- > 0) {
                ans.push_back(i); // Add elements in order of arr2
            }
        }

        for (int i = 0; i < 1001; ++i) {
            while (count[i]-- > 0) {
                ans.push_back(i); // Add remaining elements in ascending order
            }
        }
        return ans;
    }
};

// Time Complexity: O(n + m + k) - Counting elements (O(n)), sorting by arr2 (O(m)), iterating remaining (O(k))
// Space Complexity: O(n) - Stores frequency map and output array