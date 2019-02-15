// https://helloacm.com/how-to-sum-range-binary-search-tree/
// https://leetcode.com/problems/range-sum-of-bst/

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
    int rangeSumBST(TreeNode* root, int L, int R) {
        int ans = 0;
        stack<TreeNode*> st;
        if (root == NULL) return 0;
        st.push(root);
        while (st.size() > 0) {
            auto p = st.top();
            st.pop();
            if (p != NULL) {
                if (p->val >= L && p->val <= R) {
                    ans += p->val;   // update the sum
                }
                if (L < p->val) {
                    st.push(p->left);  // push left tree
                }
                if (p->val < R) {
                    st.push(p->right);  // push the right tree
                }
            }
        }
        return ans;
    }
};
