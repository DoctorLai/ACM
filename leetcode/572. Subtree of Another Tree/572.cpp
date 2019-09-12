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
        string tree1 = preorder(s);
        string tree2 = preorder(t);
        return tree1.find(tree2) != string::npos;
    }
    
private:
    string preorder(TreeNode* t) {
        if (t == nullptr) {
            return "null";
        }
        return "#" + std::to_string(t->val) + " " +
            preorder(t->left) + " " +
            preorder(t->right);
    }
};
