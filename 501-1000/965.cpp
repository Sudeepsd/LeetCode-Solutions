class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        return dfs(root, root->val); // Starts DFS with the root's value as reference
    }

    bool dfs(TreeNode* root, int val) {
        if (!root) return true; // Reached a null node, still univalued

        // Continues checking left and right subtrees while values match
        return root->val == val && dfs(root->left, val) && dfs(root->right, val); 
    }
};

// Time Complexity: O(n) - Visits each node once  
// Space Complexity: O(h) - Recursive call stack uses at most O(h) space, where h is the tree height  