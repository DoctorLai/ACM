// https://helloacm.com/string-algorithm-reverse-the-first-k-characters-for-every-2k-characters/
// https://leetcode.com/problems/reverse-string-ii/

class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size(); i += 2 * k) {
            int a = i, b = min(i + k, (int)s.size());
            reverse(begin(s) + a, begin(s) + b);
        }
        return s;
    }
};
