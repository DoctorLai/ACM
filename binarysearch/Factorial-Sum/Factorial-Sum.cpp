// https://helloacm.com/algorithms-to-sum-using-distinct-positive-factorial-numbers/
// https://binarysearch.com/problems/Factorial-Sum
// MEDIUM, MATH, GREEDY

bool solve(int n) {
    vector<long long> f;
    long long s = 1;
    for (int i = 1; s <= n; ++ i) {
        s *= i;
        f.push_back(s);
    }
    sort(rbegin(f), rend(f));
    for (int i = 0; i < f.size(); ++ i) {
        if (n >= f[i]) {
            n -= f[i];
        }
    }
    return n == 0;
}
