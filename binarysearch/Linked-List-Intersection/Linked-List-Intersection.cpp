// https://helloacm.com/linked-list-intersection-algorithm/
// https://binarysearch.com/problems/Linked-List-Intersection
// MEDIUM, TWO POINTER

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* l0, LLNode* l1) {
    if (!l0) return nullptr;
    if (!l1) return nullptr;
    auto dummy = new LLNode(-1);
    auto p = dummy;
    while (l0 && l1) {
        if (l0->val == l1->val) {
            p->next = l0;
            l0 = l0->next;
            l1 = l1->next;
            p = p->next;
        } else if (l0->val < l1->val) {
            l0 = l0->next;
        } else {
            l1 = l1->next;
        }        
    }
    p->next = nullptr;
    return dummy->next;
}  
