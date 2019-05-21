// https://helloacm.com/depth-first-search-algorithm-to-find-leaves-of-a-binary-tree/
// https://leetcode.com/problems/find-leaves-of-binary-tree/

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
    vector<vector<int>> findLeaves(TreeNode* root) {
        vector<vector<int>> res;
        dfs(root, res);
        return res;
    }
    
    int dfs(TreeNode* root, vector<vector<int>> &r) {
        if (root == NULL) { // leave nodes are depth 0.
            return 0;
        }
        int lv = dfs(root->left, r);
        int rv = dfs(root->right, r);        
        int h = 1 + max(lv, rv);
        if (h > r.size()) {
            r.push_back({});  // allocate for the new level
        }
        r[h - 1].push_back(root->val);
        return h;        
    }
};
