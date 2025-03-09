class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> ans;
        vector<pair<int, int>> heightIndexPairs;

        // Store heights along with their original indices
        for (int i = 0; i < names.size(); ++i) {
            heightIndexPairs.emplace_back(heights[i], i);
        }

        // Sort in descending order based on height
        ranges::sort(heightIndexPairs, greater<>());

        // Retrieve names based on sorted indices
        for (const auto& [_, index] : heightIndexPairs) {
            ans.push_back(names[index]);
        }
        return ans;
    }
};

// Time Complexity: Sorting takes O(n log n), and constructing the result takes O(n), so the overall complexity is O(n log n).
// Space Complexity: O(n) due to the additional vector storing height-index pairs.