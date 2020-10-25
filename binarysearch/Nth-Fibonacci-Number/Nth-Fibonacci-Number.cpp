// https://helloacm.com/compute-the-nth-fibonacci-numbers-using-iterative-and-math-algorithms/
// https://binarysearch.com/problems/Nth-Fibonacci-Number
// EASY, MATH

int solve(int n) {
    return (pow(1 + sqrt(5), n) - pow(1 - sqrt(5), n)) / (pow(2, n) * sqrt(5));
}
