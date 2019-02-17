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
        dfs(root, NULL, 0);
        return (depth[x] == depth[y]) && (parent[x] != parent[y]);
    }
    
    void dfs(TreeNode* root, TreeNode* p, int d) {
        if (root == NULL) return;
        depth[root->val] = d;
        parent[root->val] = p;
        dfs(root->left, root, d + 1);
        dfs(root->right, root, d + 1);
    }

private:
    unordered_map<int, int> depth;
    unordered_map<int, TreeNode*> parent;
};
