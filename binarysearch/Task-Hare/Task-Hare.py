# https://helloacm.com/teaching-kids-programming-greedy-algorithm-to-complete-tasks/
# https://helloacm.com/teaching-kids-programming-greedy-algorithm-to-complete-tasks/
# EASY, GREEDY, TWO POINTER

class Solution:
    def solve(self, tasks, people):
        if not tasks or not people:
            return 0
        tasks.sort()
        people.sort()
        i, j = 0, 0
        t, p = len(tasks), len(people)
        ans = 0
        while i < t and j < p:
            if people[j] >= tasks[i]:
                ans += 1
                i += 1
            j += 1
        return ans
