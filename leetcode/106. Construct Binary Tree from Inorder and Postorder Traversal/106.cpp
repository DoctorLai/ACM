// https://helloacm.com/how-to-construct-binary-tree-from-inorder-and-postorder-traversal-using-depth-first-search-algorithm-recursion/
// https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/

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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if ((postorder.empty()) || (inorder.empty())) {
            return NULL;
        }
        TreeNode* root = new TreeNode(postorder.back());
        int i = 0;
        while ((i < inorder.size()) && (inorder[i] != root->val)) i ++;
        if (i == inorder.size()) {
            return root;
        }
        vector<int> left1(begin(inorder), begin(inorder) + i);
        vector<int> right1(begin(postorder), begin(postorder) + i);
        vector<int> left2(begin(inorder) + i + 1, end(inorder));
        vector<int> right2(begin(postorder) + i, end(postorder) - 1);
        if (i > 0) {
            root->left = buildTree(left1, right1);
        }
        if (i < inorder.size()) {
            root->right = buildTree(left2, right2);
        }
        return root;
    }
};
