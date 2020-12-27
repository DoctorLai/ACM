// https://helloacm.com/algorithm-to-remove-duplicates-in-linked-list-using-hash-set/
// https://binarysearch.com/problems/Remove-Duplicates-in-Linked-List
// MEDIUM, HASH TABLE

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node) {
    unordered_set<int> vis;
    LLNode* dummy = new LLNode(-1);
    dummy->next = node;
    LLNode* prev = dummy;
    while (node) {
        if (vis.count(node->val)) {
            prev->next = node->next;
        } else {
            vis.insert(node->val);
            prev = node;
        }
        node = prev->next;
    }
    return dummy->next;
}
