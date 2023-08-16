# https://helloacm.com/teaching-kids-programming-faulty-keyboard-with-an-inverse-key-two-algorithms/
# https://leetcode.com/problems/faulty-keyboard/
# EASY, QUEUE

class Solution:
    def finalString(self, s: str) -> str:
        flip = False
        arr = deque()
        for i in s:
            if i == 'i':
                flip = not flip
            elif flip:
                arr.appendleft(i)
            else:
                arr.append(i)
        if flip:
            return "".join(list(arr)[::-1])
        return "".join(arr)
