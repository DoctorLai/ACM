// https://helloacm.com/c-c-coding-exercisse-how-to-implement-tolowercase-function/
// https://leetcode.com/problems/to-lower-case/description/

class Solution {
public:
    string toLowerCase(string str) {
        for (auto i = 0; i < str.length(); ++ i) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] += 32;
            } 
        }
        return str;
    }
};
