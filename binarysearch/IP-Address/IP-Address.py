# https://helloacm.com/teaching-kids-programming-python-function-to-check-if-valid-ipv4-address/
# https://binarysearch.com/problems/IP-Address
# EASY, STRING

class Solution:
    def solve(self, s):
        arr = s.split('.')
        if len(arr) != 4:
            return False
        for i in arr:
            if not i.isnumeric():
                return False
            a = int(i)
            if a < 0 or a > 255:
                return False
            if a == 0 and i != '0':
                return False
        return True
