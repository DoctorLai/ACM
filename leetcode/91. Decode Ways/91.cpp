// https://helloacm.com/total-number-of-ways-to-decode-the-message-via-dynamic-programming-algorithm/
// https://leetcode.com/problems/decode-ways/

class Solution {
public:
    int numDecodings(string s) {
        const int n = s.length();
        int64_t f[n + 1];
        if (n == 0) return 0;
        if (s[0] == '0') return 0;
        if (n == 1) return 1;
        if (s[1] == '0' && s[0] >= '3') return 0;
        f[0] = 1;
        std::function<int(int)> F = [&s](int i) {
            return ((s[i] - '0') * 10 + s[i + 1] - '0');
        };
        f[1] = F(0) <= 26 ? 2 : 1;
        if (s[1] == '0') f[1] = 1;
        for (int i = 2; i < n; ++ i) {
            if (s[i] == '0') {
                if (s[i - 1] >= '3' || s[i - 1] == '0') {
                    return 0;
                }
                f[i] = f[i - 2];
            } else {
                f[i] = f[i - 1];
                if (s[i - 1] > '0') {
                    if (F(i - 1) <= 26) {
                        f[i] += f[i - 2];
                    }
                }
            }
        }
        return f[n - 1];
    }
};
