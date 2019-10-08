// https://helloacm.com/the-complex-number-multiplication-function/
// https://leetcode.com/problems/complex-number-multiplication/submissions/

class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        int a1, a2, b1, b2;
        sscanf(a.c_str(), "%d+%di", &a1, &a2);
        sscanf(b.c_str(), "%d+%di", &b1, &b2);
        int xx = a1 * b1 - a2 * b2;
        int yy = a1 * b2 + a2 * b1;
        return std::to_string(xx) + "+" + std::to_string(yy) + "i";
    }
};
