// https://helloacm.com/compute-the-deepest-leaves-sum-of-a-binary-tree-using-bfs-or-dfs-algorithms/
// MEDIUM, BFS

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
        if (!root) return 0;
        queue<TreeNode*> Q;
        Q.push(root);
        int sum;
        while (!Q.empty()) {
            sum = 0;  // reset the sum for a new level
            int curSize = Q.size();
            for (int i = 0; i < curSize; ++ i) {
                auto p = Q.front();
                sum += p->val;
                Q.pop();
                if (p->left) {
                    Q.push(p->left);
                }
                if (p->right) {
                    Q.push(p->right);
                }
            }
        }
        return sum;
    }
};
