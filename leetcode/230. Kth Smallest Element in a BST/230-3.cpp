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
        int cnt = count(root->left);
        if (cnt + 1 == k) return root->val;
        // on the left sub tree
        if (k <= cnt) {
            return kthSmallest(root->left, k);
        }
        // on the left right tree
        return kthSmallest(root->right, k - 1 - cnt);
    }

private:
    // count the number of nodes in the tree
    int count(TreeNode *root) {
        if (root == NULL) return 0;
        return count(root->left) + count(root->right) + 1;
    }
};
