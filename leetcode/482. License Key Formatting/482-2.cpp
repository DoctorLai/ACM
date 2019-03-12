// https://helloacm.com/the-license-key-formatting-algorithm-in-c/
// https://leetcode.com/problems/license-key-formatting/

// memory limit exceeded
class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        string output = "";
        int j = 0;
        for (int i = S.length() - 1; i >= 0; --i) {
            if (S[i] == '-') continue;
            output = string(1, toupper(S[i])) + output;
            if ((++j) % K == 0) {
                output = "-" + output;
            }
        }
        return output[0] == '-' ? output.substr(1) : output;
    }
};
