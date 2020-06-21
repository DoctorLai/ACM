// https://helloacm.com/clone-deep-copy-binary-tree-with-random-pointer-using-hash-map-and-recursion/
// https://leetcode.com/problems/clone-binary-tree-with-random-pointer/
// MEDIUM, RECURSION, HASH MAP

/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     Node *left;
 *     Node *right;
 *     Node *random;
 *     Node() : val(0), left(nullptr), right(nullptr), random(nullptr) {}
 *     Node(int x) : val(x), left(nullptr), right(nullptr), random(nullptr) {}
 *     Node(int x, Node *left, Node *right, Node *random) : val(x), left(left), right(right), random(random) {}
 * };
 */

class Solution {
public:
    NodeCopy* copyRandomBinaryTree(Node* root) {
        if (!root) return NULL;
        if (memo.find(root) != memo.end()) {
            return memo[root];
        }
        NodeCopy* newRoot = new NodeCopy();
        memo[root] = newRoot;
        newRoot->val = root->val;
        newRoot->left = copyRandomBinaryTree(root->left);
        newRoot->right = copyRandomBinaryTree(root->right);    
        newRoot->random = copyRandomBinaryTree(root->random);            
        return newRoot;
    }
private:
    unordered_map<Node*, NodeCopy*> memo;
};
