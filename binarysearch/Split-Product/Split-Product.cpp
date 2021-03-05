// https://helloacm.com/greedy-algorithm-to-maximize-the-split-product-integer-break/
// https://binarysearch.com/problems/Split-Product
// MEDIUM, GREEDY

int solve(int n) {
    if ((n == 1) or (n == 2)) return 1;
    if (n == 3) return 2;
    int ans = 1;
    while (n > 4) {
        n -= 3;
        ans *= 3;
    }
    return ans * n;
}
