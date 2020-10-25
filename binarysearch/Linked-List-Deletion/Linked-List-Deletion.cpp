// https://helloacm.com/recursive-algorithm-to-delete-a-node-from-a-singly-linked-list/
// https://binarysearch.com/problems/Linked-List-Deletion
// EASY, RECURSION

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node, int target) {
    if (!node) return NULL;
    if (node->val == target) return solve(node->next, target);
    node->next = solve(node->next, target);
    return node;
}
