class Solution {
private:
    int digitSum(int num) {
        int sum = 0;
        while (num) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

public:
    // - Time Complexity: O(log N) since digitSum(int num) iterates through the digits, which takes O(log N) time.  
    // - Space Complexity: O(1) as only a few integer variables are used.
    int sumOfTheDigitsOfHarshadNumber(int num) {
        if (!num) return 0;
        int sum = digitSum(num);
        return num % sum ? -1 : sum;
    }
};