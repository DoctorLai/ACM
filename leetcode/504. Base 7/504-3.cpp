// https://helloacm.com/how-to-convert-integer-to-base7/
// https://leetcode.com/problems/base-7/

class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";
        string r = "";
        string sgn = "";
        if (num < 0) {
            num = -num;
            sgn = "-";
        }
        while (num > 0) {
            r.push_back(48 + num % 7);
            num /= 7;
        }
        std::reverse(begin(r), end(r));
        return sgn + r;
    }
};
