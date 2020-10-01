// https://helloacm.com/breadth-first-search-algorithm-to-find-nearest-right-node-in-binary-tree/
// https://leetcode.com/problems/find-nearest-right-node-in-binary-tree/
// MEDIUM, BFS

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* findNeartestRightNode(TreeNode* root, TreeNode* u) {
        if (!root) return NULL;
        queue<TreeNode*> Q;
        Q.push(root);
        while (!Q.empty()) {
            auto sz = Q.size();
            for (int i = 0; i < sz; ++ i) {
                auto p = Q.front();
                Q.pop();
                if (p == u) {
                    if (i == sz - 1) {
                        return NULL;
                    }
                    return Q.front();
                }
                if (p->left) Q.push(p->left);
                if (p->right) Q.push(p->right);
            }                
        }
        return NULL;
    }
};