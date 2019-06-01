// https://helloacm.com/how-to-find-the-vertical-order-traversal-of-a-binary-tree-using-dfs-algorithm/
// https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/

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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<tuple<int, int, int>> res;
        dfs(root, res, 0, 0); // store the coordinates of nodes
        sort(begin(res), end(res), [](auto a, auto b) {
            int x1 = std::get<0>(a);
            int y1 = std::get<1>(a);
            int v1 = std::get<2>(a);
            int x2 = std::get<0>(b);
            int y2 = std::get<1>(b);
            int v2 = std::get<2>(b);
            if (x1 < x2) return true;
            if ((x1 == x2) && (y1 == y2)) return v1 < v2;
            if (x1 == x2) return y1 < y2;
            return false;
        });
        int level = INT_MIN;
        vector<int> cur;
        vector<vector<int>> r;
        for (const auto &n: res) {
            int x = std::get<0>(n);
            int y = std::get<1>(n);
            int z = std::get<2>(n);
            if ((level == INT_MIN) || (x == level)) {
                cur.push_back(z);
            } else {
                r.push_back(cur);
                cur = {z};
            }
            level = x;
        }
        r.push_back(cur);
        return r;
    }
    
private:
    void dfs(TreeNode* root, vector<tuple<int, int, int>> &res, int x, int y) {
        if (root == nullptr) return;
        res.push_back(make_tuple(x, y, root->val));
        dfs(root->left, res, x - 1, y + 1);
        dfs(root->right, res, x + 1, y + 1);
    }
};
