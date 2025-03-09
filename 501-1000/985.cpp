class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        int evenSum = 0;

        // Calculate initial sum of even numbers
        for (int num : nums) {
            if ((num & 1) == 0) {
                evenSum += num;
            }
        }

        // Process each query
        for (const auto& query : queries) {
            int val = query[0], idx = query[1];

            // If current number is even, remove it from sum
            if ((nums[idx] & 1) == 0) {
                evenSum -= nums[idx];
            }

            // Update the number
            nums[idx] += val;

            // If new number is even, add it to sum
            if ((nums[idx] & 1) == 0) {
                evenSum += nums[idx];
            }

            ans.push_back(evenSum);
        }

        return ans;
    }
};

// Time Complexity: O(n + q), where n is the size of nums (for initial sum calculation) and q is the number of queries.
// Space Complexity: O(q) for storing the answer.