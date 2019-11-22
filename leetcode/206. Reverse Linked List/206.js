// https://helloacm.com/how-to-reverse-a-linked-list-in-javascript/
// https://leetcode.com/problems/reverse-linked-list/
// EASY, LINKED LIST, RECURSION

/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var reverseList = function(head) {
    if (!head) return null;
    if (!head.next) return head;
    let rev = reverseList(head.next);
    head.next.next = head;
    head.next = null;
    return rev;
};
