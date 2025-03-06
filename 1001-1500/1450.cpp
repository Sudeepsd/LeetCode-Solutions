class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        // Time Complexity: O(N), as we iterate through the array once.
        // Space Complexity: O(1), since only a few extra variables are used.
        int cnt = 0;
        for (int i = 0; i < startTime.size(); ++i) 
            cnt += (startTime[i] <= queryTime && queryTime <= endTime[i]);
        return cnt;
    }
};
    