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
        vector<vector<int>> res;
        queue<TreeNode*> Q;
        if (root == nullptr) return res;
        Q.push(root);        
        int level = 0;
        while (!Q.empty()) {
            int num = Q.size();
            vector<int> r;
            for (int i = 0; i < num; ++ i) {
                auto p = Q.front();
                Q.pop();
                if (p->left) Q.push(p->left);
                if (p->right) Q.push(p->right);
                if (level % 2 == 0) {
                    r.push_back(p->val);
                } else {
                    r.insert(begin(r), p->val);
                }
            }                
            if (!r.empty()) {
                res.push_back(r);
            }
            level ++;
        }
        return res;
    }
};
