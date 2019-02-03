// https://helloacm.com/how-to-check-if-a-binary-tree-is-univalued/
// https://leetcode.com/problems/univalued-binary-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        if (root == NULL) return true;
        return dfs(root, root->val);
    }
    
private:
    bool dfs(TreeNode* root, int val) {
        if (root == NULL) return true;
        if (root->val != val) return false;
        return dfs(root->left, val) && dfs(root->right, val);
    }
};

