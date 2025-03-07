class Solution {
public:
    // Count employees whose working hours are at least the target.
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        return std::ranges::count_if(hours, [target](int hour) {
            return hour >= target;
        });
    }
};

// Time Complexity: O(n) - Iterates through the vector once.
// Space Complexity: O(1) - Uses only a lambda function and an integer return value.