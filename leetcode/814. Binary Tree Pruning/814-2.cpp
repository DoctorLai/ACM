// https://helloacm.com/how-to-prune-a-binary-tree-in-c/
// https://leetcode.com/problems/binary-tree-pruning/

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
    TreeNode* pruneTree(TreeNode* root) {
        return containsOne(root) ? root : nullptr;
    }
    
    bool containsOne(TreeNode* root) {
        if (root == nullptr) return false;
        bool left = containsOne(root->left);
        if (!left) {
            root->left = nullptr;
        }
        bool right = containsOne(root->right);
        if (!right) {
            root->right = nullptr;
        }
        return root->val == 1 || left || right;
    }
};
