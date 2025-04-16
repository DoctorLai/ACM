# https://helloacm.com/teaching-kids-programming-compute-the-range-sum-with-update-a-deep-dive-into-segment-tree-sqrt-decomposition-brute-force-prefix-sum/
# https://leetcode.com/problems/range-sum-query-mutable/
# MEDIUM, SEGMENT TREE

from typing import List, Optional

class TreeNode:
    def __init__(self, start: int, end: int, sum_val: int = 0):
        self.start = start
        self.end = end
        self.sum = sum_val
        self.left: Optional[TreeNode] = None
        self.right: Optional[TreeNode] = None

class SegmentTree:
    def __init__(self, data: List[int]):
        self.root = self.build_tree(data, 0, len(data) - 1)

    def build_tree(self, data: List[int], start: int, end: int) -> Optional[TreeNode]:
        if start == end:
            return TreeNode(start, end, data[start])
        mid = (start + end) >> 1
        node = TreeNode(start, end)
        node.left = self.build_tree(data, start, mid)
        node.right = self.build_tree(data, mid + 1, end)
        node.sum = node.left.sum + node.right.sum
        return node

    def update(self, index: int, value: int) -> None:
        self._update(self.root, index, value)

    def _update(self, node: TreeNode, index: int, value: int) -> None:
        if node.start == node.end == index:
            node.sum = value
            return
        mid = (node.start + node.end) >> 1
        if index <= mid:
            self._update(node.left, index, value)
        else:
            self._update(node.right, index, value)
        node.sum = node.left.sum + node.right.sum

    def range_sum(self, left: int, right: int) -> int:
        return self._range_sum(self.root, left, right)

    def _range_sum(self, node: TreeNode, left: int, right: int) -> int:
        if node.start == left and node.end == right:
            return node.sum
        mid = (node.start + node.end) >> 1
        if right <= mid:
            return self._range_sum(node.left, left, right)
        elif left > mid:
            return self._range_sum(node.right, left, right)
        left_sum = self._range_sum(node.left, left, mid)
        right_sum = self._range_sum(node.right, mid + 1, right)
        return left_sum + right_sum


class NumArray:
    def __init__(self, nums: List[int]):
        self.segment_tree = SegmentTree(nums)

    def update(self, index: int, val: int) -> None:
        self.segment_tree.update(index, val)

    def sumRange(self, left: int, right: int) -> int:
        return self.segment_tree.range_sum(left, right)
