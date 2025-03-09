class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0, right = arr.size() - 1;
        
        while (left < right) {
            int mid = (left + right) >> 1;
            if (arr[mid] > arr[mid + 1]) 
                right = mid; // Peak is in the left half
            else 
                left = mid + 1; // Peak is in the right half
        }
        
        return left;
    }
};

// Time Complexity: O(log n) - Uses binary search to find the peak  
// Space Complexity: O(1) - Only a few integer variables are used 