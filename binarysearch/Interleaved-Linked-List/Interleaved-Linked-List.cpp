// https://helloacm.com/algorithms-to-compute-the-interleaved-linked-list/
// https://binarysearch.com/problems/Interleaved-Linked-List
// MEDIUM, RECURSION

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* l0, LLNode* l1) {
    if (!l0) return l1;
    if (!l1) return l0;
    auto l0next = l0->next;
    auto l1next = l1->next;
    l0->next = l1;
    l1->next = solve(l0next, l1next);
    return l0;
}
