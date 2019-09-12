// https://helloacm.com/checking-subtree-of-another-tree-using-preorder-traversal-or-recursion/
// https://leetcode.com/problems/subtree-of-another-tree/

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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if (isSame(s, t)) return true;
        if (s == nullptr) return false;
        return 
            isSubtree(s->left, t) ||
            isSubtree(s->right, t);
    }
private:
    bool isSame(TreeNode* s, TreeNode * t) {
        if (s == nullptr && t == nullptr) {
            return true;
        }
        if (s == nullptr || t == nullptr) {
            return false;
        }
        return (s->val == t->val) && 
                isSame(s->left, t->left) && 
                isSame(s->right, t->right);
    }
};
