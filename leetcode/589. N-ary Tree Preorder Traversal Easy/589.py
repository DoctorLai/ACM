# https://helloacm.com/teaching-kids-programming-n-ary-tree-preorder-traversal-algorithms-using-iterations-or-recursion/
# https://leetcode.com/problems/n-ary-tree-preorder-traversal/
# EASY, STACK

class Solution(object):
    def preorder(self, root: 'Node') -> List[int]:
        """
        :type root: Node
        :rtype: List[int]
        """
        if root is None:
            return []
        
        stack, output = [root], []            
        while stack:
            root = stack.pop()
            output.append(root.val)
            stack.extend(root.children[::-1])
                
        return output
