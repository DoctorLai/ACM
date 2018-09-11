// https://helloacm.com/how-to-convert-roman-to-integer-in-cc/
// https://leetcode.com/problems/roman-to-integer/

class Solution {
public:
    int romanToInt(string s) {
        int r = 0;
        unordered_map<char, int> roman({ // we could also use vector with pair, or map.
            {'I', 1} ,
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        });
        for (int i = 0; i < s.length() - 1; i ++) {
            int cur = roman[s[i]];
            int next = roman[s[i + 1]];
            if (cur >= next) {
                r += cur;
            } else {
                r -= cur;
            }
        }
        return r + roman[s[s.length() - 1]]; // don't forget the last character
    }
};
