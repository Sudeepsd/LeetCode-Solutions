class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0, j = n - 1; i < n; ++i) {
            if (nums[i] & 1) { // If current element is odd
                while (j >= i && (nums[j] & 1)) j--; // Find the rightmost even element
                if (j < i) break; // Stop if all remaining elements are odd
                
                swap(nums[i], nums[j]); // Swap odd and even elements
            }
        }
        return nums;
    }
};

// Time Complexity: O(n) - Each element is processed at most once  
// Space Complexity: O(1) - In-place swapping without extra storage  