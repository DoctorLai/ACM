// https://helloacm.com/how-to-search-in-a-binary-search-tree/
// https://leetcode.com/problems/search-in-a-binary-search-tree/

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
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == nullptr) return NULL;
        deque<TreeNode*> Q;
        Q.push_back(root);
        while (Q.size() > 0) {
            auto cur = Q.front();
            Q.pop_front();
            if (cur == nullptr) continue;
            if (val == cur->val) {
                return cur;
            }            
            if (val > cur->val) {
                Q.push_back(cur->right);
            } else {
                Q.push_back(cur->left);
            }
        }
        return NULL;
    }
};
