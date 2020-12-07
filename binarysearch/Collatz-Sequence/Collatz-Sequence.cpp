// https://helloacm.com/find-the-length-of-the-collatz-sequence/
// https://binarysearch.com/problems/Collatz-Sequence
// EASY, RECURSION, MATH

int solve(int n) {
    if (n == 1) return 1;
    if (n & 1) {
        return 1 + solve(3 * n + 1);
    }
    return 1 + solve(n / 2);
}
