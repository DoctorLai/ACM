// https://helloacm.com/how-to-construct-string-from-binary-tree/
// https://leetcode.com/problems/construct-string-from-binary-tree/

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
    string tree2str(TreeNode* t) {
        if (t == NULL) {
            return "";
        }
        auto left = tree2str(t->left);
        auto right = tree2str(t->right);
        auto result =  std::to_string(t->val);
        // the empty brackets cannot be omitted if right tree is not NULL
        if ((right.size() > 0) || (left.size() > 0)) {
            result += "(" + left + ")";
        }
        if (right.size() > 0) {
            result += "(" + right + ")";
        }
        return result;        
    }
};
