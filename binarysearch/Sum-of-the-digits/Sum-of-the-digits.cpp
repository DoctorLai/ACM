// https://helloacm.com/algorithms-to-compute-the-sum-of-the-digits/
// https://binarysearch.com/problems/Sum-of-the-digits
// EASY, MATH, RECURSIVE

int solve(int num) {
    return num == 0 ? 0 : (num % 10) + solve(num / 10);
}
