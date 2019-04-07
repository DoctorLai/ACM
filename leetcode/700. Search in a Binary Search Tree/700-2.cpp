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
        stack<TreeNode*> st;
        st.push(root);
        while (st.size() *gt; 0) {
            auto cur = st.top();
            st.pop();
            if (cur == nullptr) continue;
            if (val == cur->val) {
                return cur;
            }            
            if (val > cur->val) {
                st.push(cur->right);
            } else {
                st.push(cur->left);
            }
        }
        return NULL;
    }
};
