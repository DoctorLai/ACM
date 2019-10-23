// https://helloacm.com/how-to-check-if-a-binary-tree-is-balanced-top-down-and-bottom-up-recursion/
// https://leetcode.com/problems/balanced-binary-tree/
// EASY, RECURSION, BINARY TREE

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
    bool isBalanced(TreeNode* root) {
        return depth(root) != -1;
    }
private:
    int depth(TreeNode* root) {
        if (root == nullptr) return 0;
        int left = depth(root->left);
        if (left == -1) return -1;
        int right = depth(root->right);
        if (right == -1) return -1;
        if (abs(left - right) > 1) return -1;
        return max(right, left) + 1;
    }
};
