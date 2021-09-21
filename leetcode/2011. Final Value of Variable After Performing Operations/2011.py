# https://helloacm.com/teaching-kids-programming-final-value-of-variable-after-performing-operations-via-reduce-function/
# https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
# EASY, LAMBDA

class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        return reduce(lambda a, b: a + 1 if b[1] == '+' else a - 1, operations, 0)
