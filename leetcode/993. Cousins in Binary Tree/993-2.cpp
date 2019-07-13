// https://helloacm.com/the-cousins-in-binary-tree/
// https://leetcode.com/problems/cousins-in-binary-tree/

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
    bool isCousins(TreeNode* root, int x, int y) {
        TreeNode* leftParent = findParent(root, nullptr, x);
        TreeNode* rightParent = findParent(root, nullptr, y);
        if (leftParent == rightParent) return false;
        int dx = depth(root, 0, x);
        int dy = depth(root, 0, y);
        return dx == dy;
    }
    
private:
    int depth(TreeNode* root, int curDepth, int v) {
        if (root == nullptr) return 0;
        if (root->val == v) {
            return curDepth;
        }
        int x = depth(root->left, curDepth + 1, v);
        if (x > 0) return x;
        return depth(root->right, curDepth + 1, v);
    }
    
    TreeNode* findParent(TreeNode* root, TreeNode* parent, int v) {
        if (root == nullptr) return nullptr;
        if (root->val == v) return parent;
        TreeNode* left = findParent(root->left, root, v);
        if (left != nullptr) return left;
        return findParent(root->right, root, v);
    }
};
