# https://helloacm.com/how-to-find-n-repeated-element-in-size-2n-array/ 
# https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

class Solution:
    def repeatedNTimes(self, A):
        """
        :type A: List[int]
        :rtype: int
        """
        hash = {}
        for i in A:
            if i in hash:
                return i
            hash[i] = True