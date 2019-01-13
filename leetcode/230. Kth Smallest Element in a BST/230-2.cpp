// https://helloacm.com/how-to-find-the-kth-smallest-element-in-a-bst-tree-using-java-c/
// https://leetcode.com/problems/kth-smallest-element-in-a-bst/

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
        int kthSmallest(TreeNode *root, int k) {
            stack<TreeNode*> stack;
            while (root || !stack.empty()) {
                while (root) {
                    stack.push(root);
                    root = root->left;
                }
                root = stack.top();
                stack.pop();
                if (--k == 0) return root->val;
                root = root->right;
            }
        }
};
