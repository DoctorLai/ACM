// https://helloacm.com/algorithm-to-construct-binary-tree-from-preorder-and-inorder-traversal/
// https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/

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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return buildTree(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
    }
private:
    TreeNode* buildTree(vector<int>& preorder, int a, int b, vector<int>& inorder, int c, int d) {
        if (a > b) return nullptr;
        // root is the first element of preorder
        TreeNode* root = new TreeNode(preorder[a]);
        // find the root position in inorder
        int i = c;
        while (i <= d) {
            if (inorder[i] == root->val) break;
            i ++;
        }
        int leftcnt = i - c - 1;
        a ++;
        // recursively construct left tree        
        root->left = buildTree(preorder, a, a + leftcnt, inorder, c, c + leftcnt);
        // recursively construct right tree
        root->right = buildTree(preorder, a + leftcnt + 1, b, inorder, i + 1, d);
        return root;
    }    
};
