// https://helloacm.com/using-breadth-first-search-algorithm-to-count-the-number-of-leaves-and-internal-nodes-in-binary-tree/
// https://binarysearch.com/problems/Partition-Tree
// MEDIUM, BFS

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
vector<int> solve(Tree* root) {
    if (!root) return {0, 0};
    queue<Tree*> Q;
    Q.push(root);
    int leaves = 0, others = 0;
    while (!Q.empty()) {
        auto p = Q.front();
        Q.pop();
        if (p->left) Q.push(p->left);
        if (p->right) Q.push(p->right);
        if (p->left || p->right) {
            others ++;
        } else {
            leaves ++;
        }
    }
    return {leaves, others};
}
