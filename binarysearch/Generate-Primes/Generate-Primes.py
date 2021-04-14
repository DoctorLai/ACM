# https://helloacm.com/teaching-kids-programmaing-generate-prime-numbers-using-sieve-of-eratosthenes-algorithms/
# https://binarysearch.com/problems/Generate-Primes
# EASY, MATH

class Solution:
    def solve(self, n):
        isPrimes = [False] * 2 + [True] * (n - 1)
        i = 2
        while i * i <= n:
            if isPrimes[i]:
                j = i + i
                while j <= n:
                    isPrimes[j] = False
                    j += i
            i += 1
        return [x for x in range(1, n + 1) if isPrimes[x]]
