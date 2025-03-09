class Solution {
public:
    int maximum69Number(int num) {
        string ans = to_string(num);

        // Change the first '6' to '9' and return the new number
        for (int i = 0; i < ans.length(); ++i) {
            if (ans[i] == '6') {
                ans[i] = '9';
                return stoi(ans);
            }
        }
        return num;
    }
};

// Time Complexity: O(d), where d is the number of digits in num, as we iterate through the string once.
// Space Complexity: O(d) due to storing the number as a string.