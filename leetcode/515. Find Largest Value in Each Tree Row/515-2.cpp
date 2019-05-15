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
        queue<TreeNode*> Q;
        Q.push(root);
        while (!Q.empty()) {
            int curMax = INT_MIN, t = Q.size();
            for (int i = 0; i < t; ++ i) {
                auto p = Q.front();
                Q.pop();
                curMax = max(curMax, p->val);
                if (p->left) Q.push(p->left);
                if (p->right) Q.push(p->right);
            }
            r.push_back(curMax);
        }        
        return r;
    }
};
