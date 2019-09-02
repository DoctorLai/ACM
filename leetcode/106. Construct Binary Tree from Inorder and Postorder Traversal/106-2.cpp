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
        return helper(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1);
    }
private:
    TreeNode* helper(vector<int>& inorder, int a, int b, vector<int>& postorder, int c, int d) {
        if ((a > b) || (c > d)) return NULL;
        TreeNode* root = new TreeNode(postorder[d]);
        int i = a;
        while ((i <= b) && (inorder[i] != root->val)) i ++;
        if (i > b) {
            return root;
        }
        int mid = c + i - a - 1;
        root->left = helper(inorder, a, i - 1, postorder, c, mid);
        root->right = helper(inorder, i + 1, b, postorder, mid + 1, d - 1);
        return root;
    }
};
