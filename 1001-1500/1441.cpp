class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> result;
        int i = 0;

        for (int num : target) {
            while (++i != num) { // Fill in missing numbers with "Push" and "Pop"
                result.push_back("Push");
                result.push_back("Pop");
            }
            result.push_back("Push"); // Push the required number
        }

        return result;
    }
};

// Time Complexity: O(m + d) - Where m is the size of target and d is the number of missing elements  
// Space Complexity: O(m + d) - Stores the sequence of operations  