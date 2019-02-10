// https://helloacm.com/how-to-insert-into-a-binary-search-tree-recursive-and-iterative/
// https://leetcode.com/problems/insert-into-a-binary-search-tree/

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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == NULL) {
            TreeNode* newNode = new TreeNode(val);
            return newNode;
        }
        TreeNode* x = root;
        TreeNode* p;
        while (x != NULL) {
            p = x;
            if (val <= x->val) {
                x = x->left;
            } else {
                x = x->right;
            }
        }
        TreeNode* node = new TreeNode(val);
        if (val <= p->val) {
            p->left = node;
        } else {
            p->right = node;
        }
        return root;
    }
};
