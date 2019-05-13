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
        if (root == nullptr) return nullptr;
        if (pruneTree(root->left) == nullptr) {
            root->left = nullptr;
        }
        if (pruneTree(root->right) == nullptr) {
            root->right = nullptr;
        }
        if ((root->val == 1) || (root->left != nullptr) || (root->right != nullptr)) {
            return root;
        }
        return nullptr;
    }
};
