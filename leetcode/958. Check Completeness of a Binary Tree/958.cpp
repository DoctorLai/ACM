// https://helloacm.com/breadth-first-search-algorithm-to-check-completeness-of-a-binary-tree/
// https://leetcode.com/problems/check-completeness-of-a-binary-tree/

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
    bool isCompleteTree(TreeNode* root) {
        if (root == nullptr) return true;
        queue<TreeNode*> Q;
        Q.push(root);
        bool end = false;
        while (!Q.empty()) {
            auto p = Q.front();
            Q.pop();
            if (p == nullptr) {
                end = true;   // set the flag
            } else {
                if (end) return false; // meet other nodes after null
                Q.push(p->left);
                Q.push(p->right);
            }
        }
        return true;
    }
};
