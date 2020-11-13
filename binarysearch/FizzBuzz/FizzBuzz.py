# https://helloacm.com/sexy-one-liner-of-python-to-solve-the-fizzbuzz/
# https://binarysearch.com/problems/FizzBuzz

class Solution:
    def solve(self, n):
        return ["Fizz" * (i % 3 == 0) + 
                "Buzz" * (i % 5 == 0) or str(i) for i in range(1, n + 1)]
