// https://helloacm.com/breadth-first-search-algorithm-to-convert-level-order-binary-search-tree-to-linked-list/
// https://binarysearch.com/problems/Level-Order-Binary-Search-Tree-to-Linked-List
// MEDIUM, BFS

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(Tree* root) {
    if (!root) {
        return NULL;
    }
    queue<Tree*> Q;
    LLNode* dummy = new LLNode();
    auto head = dummy;
    Q.push(root);
    while (!Q.empty()) {
        auto p = Q.front();
        Q.pop();
        head->next = new LLNode(p->val);
        head = head->next;
        if (p->left) {
            Q.push(p->left);
        }
        if (p->right) {
            Q.push(p->right);
        }
    }
    return dummy->next;
}
