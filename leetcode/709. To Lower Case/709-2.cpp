// https://helloacm.com/c-c-coding-exercisse-how-to-implement-tolowercase-function/
// https://leetcode.com/problems/to-lower-case/

class Solution {
public:
    string toLowerCase(string str) {
        std::transform(begin(str), end(str), begin(str), [](auto &ch) { return std::tolower(ch); });
        return str;
    }
};
