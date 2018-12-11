// https://helloacm.com/finding-two-numbers-of-given-sum-in-binary-search-tree/
// https://leetcode.com/problems/two-sum-iv-input-is-a-bst/

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
    bool findTarget(TreeNode* root, int k) {
        if (root == NULL) return false;
        unordered_set<int> data;
        queue<treenode *> q;
        q.push(root);
        while (!q.empty()) {
            auto p = q.front();
            q.pop();
            if (data.count(p->val)) return true;
            data.insert(k - p->val);
            if (p->left) q.push(p->left);
            if (p->right) q.push(p->right);
        }
        return false;
    }
};