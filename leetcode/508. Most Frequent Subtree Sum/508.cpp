// https://helloacm.com/how-to-find-out-the-most-frequent-subtree-sum-using-depth-first-search-algorithm/
// https://leetcode.com/problems/most-frequent-subtree-sum/

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
    vector<int> findFrequentTreeSum(TreeNode* root) {
        dfs(root);
        vector<int> r;
        for (auto it = sums.begin(); it != sums.end(); ++ it) {
            if (it->second == count) {
                r.push_back(it->first);
            }
        }
        return r;
    }
    
    int dfs(TreeNode* root) {
        if (root == nullptr) return 0;
        int leftsum = dfs(root->left);
        int rightsum = dfs(root->right);
        int sum = root->val + leftsum + rightsum;
        if (sums.find(sum) == sums.end()) {
            sums[sum] = 1;
        } else {
            sums[sum] ++;
        }
        count = max(count, sums[sum]);
        return sum;
    }
    
private:
    unordered_map<int, int> sums;
    int count = 0;
};
