// https://helloacm.com/how-to-convert-bst-to-greater-tree/
// https://leetcode.com/problems/convert-bst-to-greater-tree/

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
    TreeNode* convertBST(TreeNode* root) {
        int sum = 0;
        TreeNode* node = root;
        stack<TreeNode*> st;
        while ((st.size() > 0) || node != NULL) {
            while (node != NULL) {
                st.push(node);
                node = node->right;
            }
            node = st.top();
            st.pop();
            sum += node->val;
            node->val = sum;
            node = node->left;
        }
        return root;
    }
};
