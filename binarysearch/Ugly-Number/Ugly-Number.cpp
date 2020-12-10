// https://helloacm.com/algorithms-to-determine-a-ugly-number-integer/
// https://binarysearch.com/problems/Ugly-Number
// EASY, MATH

bool solve(int n) {
    for (auto &p: {2, 3, 5}) {
        while (n % p == 0) {
            n /= p;
        }
    }
    return n == 1;
}
