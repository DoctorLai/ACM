// https://leetcode.com/problems/binary-tree-preorder-traversal/
// https://helloacm.com/teaching-kids-programming-converting-breadth-first-search-algorithm-to-iterative-preorder-order-depth-first-search-for-a-binary-tree/
// EASY, DFS, RECURSION

// Definition for a binary tree node.
// #[derive(Debug, PartialEq, Eq)]
// pub struct TreeNode {
//   pub val: i32,
//   pub left: Option<Rc<RefCell<TreeNode>>>,
//   pub right: Option<Rc<RefCell<TreeNode>>>,
// }
// 
// impl TreeNode {
//   #[inline]
//   pub fn new(val: i32) -> Self {
//     TreeNode {
//       val,
//       left: None,
//       right: None
//     }
//   }
// }
use std::rc::Rc;
use std::cell::RefCell;
impl Solution {
    pub fn preorder_traversal(root: Option<Rc<RefCell<TreeNode>>>) -> Vec<i32> {
        let root = match root {
            Some(a) => a,
            None => return vec![],
        };
        let mut ans = vec![];
        ans.push(root.borrow().val);
        ans.append(&mut Self::preorder_traversal(root.borrow().left.clone()));
        ans.append(&mut Self::preorder_traversal(root.borrow().right.clone()));
        ans        
    }
}
