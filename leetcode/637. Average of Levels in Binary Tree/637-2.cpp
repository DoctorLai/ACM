// https://helloacm.com/how-to-compute-average-of-levels-in-binary-tree/
// https://leetcode.com/problems/average-of-levels-in-binary-tree/

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        if (root == nullptr) return {};
        queue<TreeNode*> Q;
        Q.push(root);
        vector<double> r;
        while (!Q.empty()) {
            int sz = Q.size();
            double sum = 0;
            for (size_t i = 0; i < sz; ++ i) { // expanding next level's nodes
                auto p = Q.front();
                Q.pop();
                if (p->left) {
                    Q.push(p->left);
                }
                if (p->right) {
                    Q.push(p->right);
                }
                sum += p->val;
            }
            r.push_back(sum / sz);
        }
        return r;
    }
};
