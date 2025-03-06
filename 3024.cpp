// Sort the sides and classify the triangle based on its properties.

class Solution {
public:
    string triangleType(vector<int>& nums) {
        // Time Complexity: O(1), as sorting a fixed-size array (3 elements) is constant time.
        // Space Complexity: O(1), since only a few extra variables are used.
        ranges::sort(nums);
        if (nums[0] + nums[1] <= nums[2]) return "none";
        if (nums[0] == nums[2]) return "equilateral";
        if (nums[0] == nums[1] || nums[1] == nums[2]) return "isosceles";
        return "scalene";
    }
};