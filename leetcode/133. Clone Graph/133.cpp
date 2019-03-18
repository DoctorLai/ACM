// https://helloacm.com/how-to-clone-a-graph-in-c-java-using-depth-first-search-algorithm-graph-and-hashmap/
// https://leetcode.com/problems/clone-graph/

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;

    Node() {}

    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/
class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (node == NULL) return NULL;
        if (copied.find(node) != copied.end()) { // already cloned
            return copied[node];
        }
        vector<Node*> nbs = {};
        Node* root = new Node(node->val, nbs);
        copied[node] = root; // mark it cloned first to avoid stack overflow.
        for (const auto &n: node->neighbors) {
            root->neighbors.push_back(cloneGraph(n)); // clone the neighboured recursively
        }
        return root;
    }

private:
    unordered_map<Node*, Node*> copied;
};
