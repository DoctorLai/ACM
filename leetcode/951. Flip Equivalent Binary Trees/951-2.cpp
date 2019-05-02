// https://helloacm.com/how-to-flip-equivalent-binary-trees/
// https://leetcode.com/problems/flip-equivalent-binary-trees/

/*
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
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        vector<int> r1, r2;
        dfs(root1, r1);
        dfs(root2, r2);
        return same(r1, r2); // check if the order is the same
    }    
    
    void dfs(TreeNode* root, vector<int> &r) {
        if (root != NULL) {
            r.push_back(root->val);
            if (root->left == NULL) {
                dfs(root->right, r);
            } else 
            if (root->right == NULL) {
                dfs(root->left, r);
            } else
            if (root->left->val < root->right->val) {
                dfs(root->left, r);
                dfs(root->right, r);
            } else {
                dfs(root->right, r);
                dfs(root->left, r);                    
            }
            r.push_back(-1); // marks end
        }
    }
    
    bool same(const vector<int> &r1, const vector<int> &r2) {
        if (r1.size() != r2.size()) return false;
        for (int i = 0; i < r1.size(); ++ i) {
            if (r1[i] != r2[i]) return false;
        }
        return true;
    }
};
