// https://helloacm.com/algorithm-to-maximize-social-distancing/
// https://binarysearch.com/problems/Maximize-Social-Distancing
// EASY, MATH, ARRAY

int solve(vector<int>& seats) {
    int n = seats.size();
    if (n == 0) return 0;
    vector<int> left(n), right(n);
    int prev = -INT_MAX + 1;
    for (int i = 0; i < n; ++ i) {
        if (seats[i] == 0) {
            left[i] = prev;
        } else {
            prev = i;
            left[i] = i;
        }
    }
    prev = INT_MAX;
    for (int i = static_cast<int>(n) - 1; i >= 0; -- i) {
        if (seats[i] == 0) {
            right[i] = prev;
        } else {
            prev = i;
            right[i] = i;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; ++ i) {
        ans = max(ans, min(i - left[i], right[i] - i));
    }
    return ans;
}
