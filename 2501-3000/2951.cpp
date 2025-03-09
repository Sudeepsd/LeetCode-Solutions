class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int> indices;
        for (int i = 1; i < mountain.size() - 1; ++i) {
            if (mountain[i - 1] < mountain[i] && mountain[i + 1] < mountain[i]) {
                indices.push_back(i);
            }
        }
        return indices;
    }
};

// Time Complexity: O(n) - Single pass through the array
// Space Complexity: O(1) - Output space not counted