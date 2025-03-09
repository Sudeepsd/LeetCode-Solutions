class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int threshold = n / 4;

        for (int i = 0; i < n - threshold; ++i) {
            if (arr[i] == arr[i + threshold]) 
                return arr[i]; // If the same element appears at i and i + threshold, it occurs > 25%
        }   
        
        return -1; // Should never reach here as the problem guarantees a solution
    }
};

// Time Complexity: O(n) - At most n/4 comparisons in a sorted array  
// Space Complexity: O(1) - Uses only a few integer variables