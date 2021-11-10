# https://helloacm.com/teaching-kids-programming-square-root-decomposition-to-query-range-sum-of-mutable-list/
# https://leetcode.com/problems/range-sum-query-mutable/
# MEDIUM, SQRT DECOMPOSITION, MATH

class NumArray:
    def __init__(self, nums: List[int]):
        self.nums = nums
        self.n = math.ceil(sqrt(len(nums)))
        self.blocks = [0] * (len(nums) // self.n + 1)
        for i in range(len(nums)):
            self.blocks[i//self.n] += nums[i]        

    def update(self, idx: int, val: int) -> None:
        self.blocks[idx // self.n] += val - self.nums[idx]
        self.nums[idx] = val        

    def sumRange(self, left: int, right: int) -> int:
        ans = 0
        x = left
        while x <= right:
            if x % self.n == 0 and x + self.n <= right:
                ans += self.blocks[x // self.n]
                x += self.n
            else:
                ans += self.nums[x]
                x += 1
        return ans        
