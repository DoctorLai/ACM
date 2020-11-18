// https://helloacm.com/depth-first-search-and-breadth-first-search-algorithm-in-checking-sum-of-children-nodes-in-binary-tree/
// https://binarysearch.com/problems/Sum-Tree
// MEDIUM, BFS, QUEUE

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree* root) {
    if (!root) return true;
    queue<Tree*> Q;
    Q.push(root);
    while (!Q.empty()) {
        auto p = Q.front();
        Q.pop();
        if (p->left || p->right) {
            int sum = 0;
            if (p->left) {
                sum += p->left->val;
                Q.push(p->left);
            }
            if (p->right) {
                sum += p->right->val;
                Q.push(p->right);
            }
            if (sum != p->val) return false;
        }
    }
    return true;
}
