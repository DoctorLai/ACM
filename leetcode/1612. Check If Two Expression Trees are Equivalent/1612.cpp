// https://helloacm.com/depth-first-search-algorithm-to-check-if-two-expression-trees-are-equivalent/
// https://leetcode.com/problems/check-if-two-expression-trees-are-equivalent/
// MEDIUM, DFS

/**
 * Definition for a binary tree node.
 * struct Node {
 *     char val;
 *     Node *left;
 *     Node *right;
 *     Node() : val(' '), left(nullptr), right(nullptr) {}
 *     Node(char x) : val(x), left(nullptr), right(nullptr) {}
 *     Node(char x, Node *left, Node *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool checkEquivalence(Node* root1, Node* root2) {
        if (root1 == root2) return true;
        unordered_map<char, int> count1, count2;
        dfs(root1, count1);
        dfs(root2, count2);
        return count1 == count2;
    }
    
private:    
    void dfs(Node* root, unordered_map<char, int> &count) {
        if (!root) return ;
        if (root->val != '+') count[root->val] ++;
        dfs(root->left, count);
        dfs(root->right, count);
    }
}; 