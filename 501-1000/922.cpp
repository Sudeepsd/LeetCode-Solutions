class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        for (int i = 0, j = 1; i < nums.size() && j < nums.size(); i += 2) {
            if (nums[i] & 1) { // If an odd number is at an even index
                while (nums[j] & 1) j += 2; // Find the next even number at an odd index
                
                swap(nums[i], nums[j]); // Swap to maintain parity condition
            }
        }
        return nums;
    }
};

// Time Complexity: O(n) - Each element is processed once  
// Space Complexity: O(1) - Modifies the input array in place