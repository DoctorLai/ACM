// https://helloacm.com/binary-tree-zigzag-level-order-traversal-algorithms-using-dfs-and-bfs/
// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        dfs(root, 0);
        return res;
    }
private:
    vector<vector<int>> res;
    
    void dfs(TreeNode* root, int depth) {
        if (root == nullptr) return;
        if (res.size() <= depth) {
            res.push_back({});
        }
        if (depth % 2 == 0) {
            res[depth].push_back(root->val);
        } else {
            res[depth].insert(begin(res[depth]), root->val);
        }        
        dfs(root->left, depth + 1);
        dfs(root->right, depth + 1);        
    }
};
