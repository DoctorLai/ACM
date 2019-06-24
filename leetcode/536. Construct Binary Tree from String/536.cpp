// https://helloacm.com/how-to-construct-binary-tree-from-string-binary-tree-deserialization-algorithm/
// https://leetcode.com/problems/construct-binary-tree-from-string/

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
    TreeNode* str2tree(string s) {
        if (s.size() == 0) {
            return nullptr;
        }
        // i don't know why adding this check works..
        if (s[0] == ')') return nullptr; 
        int j = 0;
        // find characters before first opening curly brace
        while (j < s.size() && s[j] != '(') j ++; 
        TreeNode* root = new TreeNode(std::stoi(s.substr(0, j)));
        int left = 0, i = j;
        // find the separation between left and right tree
        while (i < s.size()) {
            if (s[i] == '(') {
                left ++;
            } else if (s[i] == ')') {
                left --;
            }
            if (left == 0) { // the last closing curly brace for left tree
                break;
            }
            i ++;
        }
        if (j < s.size() - 1) { // if left tree is not null
            root->left = str2tree(s.substr(j + 1, i - 1 - j));
        }
        if (i + 1 < s.size() - 1) { // if right tree is not null
            root->right = str2tree(s.substr(i + 2, s.size() - i - 2));   
        }
        return root;
    }
}
