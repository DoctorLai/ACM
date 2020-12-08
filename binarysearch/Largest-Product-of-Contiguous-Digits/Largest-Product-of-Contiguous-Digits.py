# https://helloacm.com/compute-largest-product-of-contiguous-digits/
# https://binarysearch.com/problems/Largest-Product-of-Contiguous-Digits
# EASY, SLIDING WINDOW

class Solution:
    def solve(self, num, k):
        s = str(num)
        ans = 0
        arr = str(num).split('0')
        for a in arr:
            if len(a) < k:
                continue
            cur = 1
            for i in range(k):
                cur *= int(a[i])
            ans = max(ans, cur)
            i, j = 0, k
            while j < len(a):
                cur *= int(a[j])
                cur //= int(a[i])
                ans = max(ans, cur)
                i += 1
                j += 1
        return ans
