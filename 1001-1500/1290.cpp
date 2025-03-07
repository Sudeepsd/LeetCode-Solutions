class Solution {
public:
    // Convert a binary number in a linked list to an integer.
    int getDecimalValue(ListNode* head) {
        int ans = 0;
        while (head) {
            ans <<= 1;  // Left shift to make space for the next bit.
            ans += head->val;  // Add the current node's value.
            head = head->next;
        }
        return ans;
    }
};

// Time Complexity: O(n) - Iterates through the linked list once.
// Space Complexity: O(1) - Uses only a single integer variable.
    