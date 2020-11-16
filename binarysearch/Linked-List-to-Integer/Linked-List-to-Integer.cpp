// https://helloacm.com/algorithms-to-convert-binary-linked-list-to-integer/
// https://binarysearch.com/problems/Linked-List-to-Integer
// EASY, MATH, LINKED LIST

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node) {
    int r = 0;
    while (node) {
        r = r * 2 + node->val;
        node = node->next;
    }
    return r;
}
