// https://helloacm.com/deep-clone-n-ary-tree-using-hash-map-recursive-depth-first-search-algorithm/
// https://leetcode.com/problems/clone-n-ary-tree/
// MEDIUM, DFS, RECURSION, HASH MAP

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    Node* cloneTree(Node* root) {
        if (!root) return nullptr;
        if (memo.find(root) != memo.end()) return memo[root];
        Node* newRoot = new Node(root->val);
        memo[root] = newRoot;
        for (const auto &n: root->children) {            
            newRoot->children.push_back(cloneTree(n));
        }
        return newRoot;
    }
private:
    unordered_map<Node*, Node*> memo;
};
