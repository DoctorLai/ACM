// https://helloacm.com/how-to-turn-a-binary-search-tree-into-a-increasing-order-search-tree/
// https://leetcode.com/problems/increasing-order-search-tree/

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
    TreeNode* increasingBST(TreeNode* root) {
        if (root == NULL) return NULL;
        vector<int> nodes;
        stack<TreeNode*> st;
        TreeNode *p = root;
        while (st.size() > 0 || p) {
            while (p) {
                st.push(p);
                p = p->left;
            }
            p = st.top();
            st.pop();
            nodes.push_back(p->val);
            p = p->right;
        }
        TreeNode *ans = new TreeNode(-1);
        p = ans;
        for (const auto &n: nodes) {
            p->right = new TreeNode(n);
            p = p->right;
        }
        return ans->right;
    }
};
