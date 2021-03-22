# https://helloacm.com/teaching-kids-programming-two-sum-algorithm-when-input-array-is-sorted/
# https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
# EASY, TWO POINTER

class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        i, j = 0, len(numbers) - 1
        while i < j:
            if numbers[i] + numbers[j] == target:
                return [i + 1, j + 1]
            elif numbers[i] + numbers[j] < target:
                i += 1
            else:
                j -= 1
