// https://helloacm.com/how-to-get-the-maximum-level-sum-of-a-binary-tree-using-breadth-first-search-algorithm/
// https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/

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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> Q;
        if (root == nullptr) return 0;
        Q.push(root);
        int level = 0;
        map<int, int> sum;
        while (!Q.empty()) {
            int cursum = 0;
            int count = Q.size();
            level ++;
            // expand nodes of same level
            for (int i = 0; i < count; ++ i) {
                auto p = Q.front();
                cursum += p->val;
                if (p->left != nullptr) Q.push(p->left);
                if (p->right != nullptr) Q.push(p->right);
                Q.pop();
            }
            if (sum.find(cursum) == sum.end()) {
                sum[cursum] = level;
            } else {
                sum[cursum] = min(sum[cursum], level);
            }
        }
        return rbegin(sum)->second;
    }
};
