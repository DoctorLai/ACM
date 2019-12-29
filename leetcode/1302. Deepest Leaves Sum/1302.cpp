// https://helloacm.com/compute-the-deepest-leaves-sum-of-a-binary-tree-using-bfs-or-dfs-algorithms/
// MEDIUM, DFS

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
    int deepestLeavesSum(TreeNode* root) {
        helper(root, 0);
        int sum = 0;
        for (const auto &n: data.rbegin()->second) {
            sum += n;
        }
        return sum;
    }
private:
    map<int, vector<int>> data;
    void helper(TreeNode* root, int depth) {
        if (root == nullptr) return;        
        data[depth].push_back(root->val);
        helper(root->left, depth + 1);
        helper(root->right, depth + 1);
    }
};
