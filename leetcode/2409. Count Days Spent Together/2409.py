# https://helloacm.com/teaching-kids-programming-count-days-spent-together-intersection-of-two-intervals-line-sweep-algorithm/
# https://leetcode.com/problems/count-days-spent-together/
# MEDIUM, LINE SWEEP

class Solution:
    def countDaysTogether(self, arriveAlice: str, leaveAlice: str, arriveBob: str, leaveBob: str) -> int:        
        days = (0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31)

        def f(date):
            month, day = map(int, date.split("-"))
            return sum(days[:month]) + day

        arr = [0] * 367
        arr[f(arriveAlice)] += 1
        arr[f(leaveAlice) + 1] -= 1

        arr[f(arriveBob)] += 1
        arr[f(leaveBob) + 1] -= 1

        s = list(accumulate(arr))
        return s.count(2)
