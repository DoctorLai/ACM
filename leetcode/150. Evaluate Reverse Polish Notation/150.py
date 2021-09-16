# https://helloacm.com/teaching-kids-programming-evaluate-reverse-polish-notation/
# https://leetcode.com/problems/evaluate-reverse-polish-notation/
# MEDIUM, STACK

class Solution:
    def evalRPN(self, tokens: List[str]) -> int:        
        operations = {
            "+": lambda a, b: a + b,
            "-": lambda a, b: a - b,
            "/": lambda a, b: int(a/b),
            "*": lambda a, b: a * b
        }

        stack = []
        for e in tokens:
            if e in operations:
                n2 = stack.pop()
                n1 = stack.pop()
                stack.append(operations[e](n1, n2))
            else:
                stack.append(int(e))
        return stack[-1]
