// https://helloacm.com/the-license-key-formatting-algorithm-in-c/
// https://leetcode.com/problems/license-key-formatting/

class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        const int MAX = S.length() * 2;
        char output[MAX];
        int k = MAX - 1;
        int j = 0;
        for (int i = S.length() - 1; i >= 0; --i) {
            if (S[i] == '-') continue;
            output[k --] = toupper(S[i]);
            if ((++j) % K == 0) {
                output[k --] = '-';
            }
        }
        int len = MAX - k - 1;
        string xx(len, ' ');
        for (int i = 0; i < len; ++ i) {
            xx[i] = output[k + i + 1];
        }
        return xx[0] == '-' ? xx.substr(1) : xx;
    }
};
