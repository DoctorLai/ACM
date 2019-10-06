# https://helloacm.com/intersection-of-three-sorted-arrays-using-three-pointers/
# https://leetcode.com/problems/intersection-of-three-sorted-arrays/

import collections

class Solution:
    def arraysIntersection(self, arr1: List[int], arr2: List[int], arr3: List[int]) -> List[int]:
        cnt = collections.Counter(arr1) + collections.Counter(arr2) + collections.Counter(arr3)
        return [x for x in cnt if cnt[x] == 3]
