// https://helloacm.com/compute-the-nth-row-of-a-pascals-triangle-using-dynamic-programming-algorithm/
// https://binarysearch.com/problems/Pascal's-Triangle
// EASY, DP

vector<int> solve(int n) {
    vector<int> res(n + 1, 0);
    res[0] = 1;
    for (int i = 0; i <= n; ++ i) {
        for (int j = i; j > 0; -- j) {
            res[j] += res[j - 1];
        }
    }
    return res;
}
