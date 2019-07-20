// https://helloacm.com/the-maximum-average-subtree-of-a-binary-tree/
// https://leetcode.com/problems/maximum-average-subtree/

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
    double maximumAverageSubtree(TreeNode* root) {
        int cnt = 0;
        getSum(root, cnt);
        return maxAvg;
    }
    
private:
    int getSum(TreeNode* root, int &cnt) {
        if (root == nullptr) return 0;
        int left_cnt = 0;
        int right_cnt = 0;
        int left = getSum(root->left, left_cnt);
        int right = getSum(root->right, right_cnt);
        int sum = left + right + root->val;
        cnt = left_cnt + right_cnt + 1;
        maxAvg = max(maxAvg, (double)sum / cnt);
        return sum;
    }
    double maxAvg = 0.0;
};
