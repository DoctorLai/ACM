// https://helloacm.com/dfs-and-bfs-algorithms-to-find-all-the-lonely-nodes-of-a-binary-tree/
// https://leetcode.com/problems/find-all-the-lonely-nodes/
// EASY, DFS

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> getLonelyNodes(TreeNode* root) {
        vector<int> res;
        dfs(root, res);
        return res;
    }
    
private:
    void dfs(TreeNode* root, vector<int> &res) {
        if (!root) return;
        if ((root->left) && (root->right)) {
            dfs(root->left, res);
            dfs(root->right, res);
            return;
        }
        if (root->left) {
            res.push_back(root->left->val);        
            dfs(root->left, res);
        }
        if (root->right) {
            res.push_back(root->right->val);        
            dfs(root->right, res);            
        }                
    }
};
