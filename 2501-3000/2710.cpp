class Solution {
public:
    string removeTrailingZeros(string num) {
        while (num.back() == '0') 
            num.pop_back();
        return num;
    }
};

// Time Complexity: O(N) - In the worst case, all N characters are zeros and removed one by one.
// Space Complexity: O(1) - The operation is done in place without extra space.
