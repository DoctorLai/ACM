// https://helloacm.com/algorithms-to-check-narcissistic-number/
// https://binarysearch.com/problems/Narcissistic-Number
// EASY, MATH

bool solve(int n) {
    using ll = long long;
    ll sum = 0;
    int len = ceil(log10(n));
    int m = n;
    while (m) {
        sum += pow(m%10, len);
        m /= 10;
    }
    return sum == n;
}
