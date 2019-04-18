// https://helloacm.com/how-to-compute-average-of-levels-in-binary-tree/
// https://leetcode.com/problems/average-of-levels-in-binary-tree/

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
    vector<double> averageOfLevels(TreeNode* root) {
        if (root == NULL) {
            return {};
        }
        map<int, vector<int>> data;  // level and their associate values
        vector<double> r;
        queue<pair<TreeNode*, int>> q;
        q.push(make_pair(root, 1));
        while (q.size() > 0) {
            auto p = q.front();
            q.pop();
            if (data.find(p.second) == data.end()) { 
                data[p.second] = { p.first->val };
            } else {
                data[p.second].push_back(p.first->val);
            }
            if (p.first->left != NULL) {
                q.push(make_pair(p.first->left, p.second + 1));
            }
            if (p.first->right != NULL) {
                q.push(make_pair(p.first->right, p.second + 1));
            }
        }
        for (const auto &n: data) {
            vector<int> x = n.second;
            int64_t sum = 0;
            for (int i = 0; i < x.size(); ++ i) {
                sum += x[i];
            }
            r.push_back(sum * 1.0 / x.size());
        }
        return r;
    }
};
