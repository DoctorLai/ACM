// https://helloacm.com/how-to-construct-binary-search-tree-from-preorder-traversal-c-and-java/
// https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/

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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return helper(preorder, 0, preorder.size() - 1);
    }
    
    TreeNode* helper(vector<int>& preorder, int left, int right) {
        if (left > right) return NULL;
        int root = preorder[left];
        int r = right + 1;
        for (int i = left + 1; i <= right; ++ i) {
            if (preorder[i] >= root) { // find the first of right node
                r = i;
                break;
            }
        }
        TreeNode* rootNode = new TreeNode(root);
        rootNode->left = helper(preorder, left + 1, r - 1);
        rootNode->right = helper(preorder, r, right);
        return rootNode;
    }
};
