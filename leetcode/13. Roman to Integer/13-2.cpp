// https://helloacm.com/how-to-convert-roman-to-integer-in-cc/
// https://leetcode.com/problems/roman-to-integer/

class Solution {
public:
    int romanToInt(string s) {
        vector<pair<string, int>> romans({
            {"M", 1000},
            {"CM", 900},
            {"D", 500},
            {"CD", 400},
            {"C", 100},
            {"XC", 90},
            {"L", 50},
            {"XL", 40},
            {"X", 10},
            {"IX", 9},
            {"V", 5},
            {"IV", 4},
            {"I", 1}        
        });
        auto r = 0;
        while (s.size() > 0) {
            for (auto i = romans.begin(); i != romans.end(); ++ i) {
                auto find = s.find(i->first);
                if (find == 0) { // starts with
                    r += i->second;
                    s = s.substr(find + i->first.size()); // jump over the prefix
                    break;
                }
            }
        }
        return r;
    }
};
