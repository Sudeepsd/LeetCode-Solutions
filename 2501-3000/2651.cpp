class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        return (arrivalTime + delayedTime) % 24;
    }
};

// Time Complexity: O(1) - Constant time arithmetic operation.
// Space Complexity: O(1) - No extra space is used.