// https://helloacm.com/how-to-find-largest-value-in-each-tree-row-level-using-bfs-or-dfs-algorithm/
// https://leetcode.com/problems/find-largest-value-in-each-tree-row/

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
    vector<int> largestValues(TreeNode* root) {
        vector<int> r;
        if (root == nullptr) return r;
        dfs(root, 1, r);
        return r;
    }
    
    void dfs(TreeNode* root, int depth, vector<int> &r) {
        if (root == nullptr) return;
        if (r.size() < depth) {
            r.push_back(root->val);
        };
        dfs(root->left, depth + 1, r);
        dfs(root->right, depth + 1, r);
        r[depth - 1] = max(r[depth - 1], root->val);
    }
};
