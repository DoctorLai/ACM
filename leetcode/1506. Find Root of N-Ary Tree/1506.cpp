// https://helloacm.com/how-to-find-root-of-n-ary-tree-using-the-hash-set/
// https://leetcode.com/problems/find-root-of-n-ary-tree/
// MEDIUM, HASH MAP

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
    Node* findRoot(vector<Node*> tree) {
        unordered_set<Node*> nodes;
        for (const auto &n: tree) {
            nodes.insert(n);
        }
        for (const auto &n: tree) {
            for (const auto &c: n->children) {
                nodes.erase(c);
            }
        }
        return *begin(nodes);
    }
};
