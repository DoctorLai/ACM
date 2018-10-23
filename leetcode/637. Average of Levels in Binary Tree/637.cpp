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
        queue<pair<TreeNode*, int>> Q;
        Q.push(make_pair(root, 0));
        unordered_map<int, int> counter;
        vector<double> result;
        while (!Q.empty()) {
            auto p = Q.front();
            Q.pop();
            auto depth = p.second;
            if (counter.find(depth) == counter.end()) {
                counter[depth] = 1;
            } else {
                counter[depth] ++;
            }
            if (result.size() <= depth) {
                result.push_back(p.first->val);
            } else {
                result[depth] = (result[depth] * (counter[depth] - 1) + p.first->val) / counter[depth];
            }
            if (p.first->left) {
                Q.push(make_pair(p.first->left, depth + 1));
            }
            if (p.first->right) {
                Q.push(make_pair(p.first->right, depth + 1));
            }            
        }
        return result;
    }
};
