// https://helloacm.com/how-to-serialize-and-deserialize-binary-tree/
// https://leetcode.com/problems/serialize-and-deserialize-binary-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if (root == nullptr) {
            return "";
        }
        string s = std::to_string(root->val) + 
            "(" + serialize(root->left) + ")";
        if (root->right != nullptr) {
            s += "(" + serialize(root->right) + ")";
        }
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        string s = data;
        if (s.size() == 0) {
            return nullptr;
        }
        if (s[0] == ')') return nullptr;
        int j = 0;
        while (j < s.size() && s[j] != '(') j ++;
        TreeNode* root = new TreeNode(std::stoi(s.substr(0, j)));
        int left = 0, i = j;
        while (i < s.size()) {
            if (s[i] == '(') {
                left ++;
            } else if (s[i] == ')') {
                left --;
            }
            if (left == 0) {
                break;
            }
            i ++;
        }
        if (j < s.size() - 1) {
            root->left = deserialize(s.substr(j + 1, i - 1 - j));
        }
        if (i + 1 < s.size() - 1) {
            root->right = deserialize(s.substr(i + 2, s.size() - i - 2));   
        }
        return root;        
    }
};
