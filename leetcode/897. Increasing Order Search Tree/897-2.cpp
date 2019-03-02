// https://helloacm.com/how-to-turn-a-binary-search-tree-into-a-increasing-order-search-tree/
// https://leetcode.com/problems/increasing-order-search-tree/

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
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> nodes;
        dfs(root, nodes); // store the in-order nodes
        TreeNode *ans = new TreeNode(-1); // dummy root node
        TreeNode *p = ans;
        for (const auto &n: nodes) {
            p->right = new TreeNode(n);
            p = p->right;
        }
        return ans->right;
    }

    void dfs(TreeNode* root, vector<int> &nodes) {
        if (root == NULL) return;
        dfs(root->left, nodes);
        nodes.push_back(root->val);
        dfs(root->right, nodes);
    }
};
