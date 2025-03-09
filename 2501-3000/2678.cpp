class Solution {
public:
    int countSeniors(vector<string>& details) {
        // Count the number of people with age greater than 60
        return count_if(details.begin(), details.end(), [](const string& detail) {
            return stoi(detail.substr(11, 2)) > 60;
        });
    }
};

// Time Complexity: O(n) since we iterate through the details once.
// Space Complexity: O(1) as only a few integer variables are used.