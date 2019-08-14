// https://helloacm.com/how-to-compute-the-maximum-difference-between-node-and-ancestor/
// https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/

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
    int maxAncestorDiff(TreeNode* root) {
        if (root == nullptr) return 0;
        return dfs(root, root->val, root->val);
    }
private:
    int dfs(TreeNode* root, int small, int big) {
        if (root == nullptr) return big - small;
        big = max(big, root->val);
        small = min(small, root->val);
        return max(dfs(root->left, small, big),
                   dfs(root->right, small, big));
    }
};
