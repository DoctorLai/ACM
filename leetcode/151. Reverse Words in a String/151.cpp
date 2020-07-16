// https://helloacm.com/how-to-reverse-words-in-a-string-using-modern-programming-language/
// https://leetcode.com/problems/reverse-words-in-a-string/
// MEDIUM, STRING

class Solution {
public:
    string reverseWords(string s) {
        stringstream all(s);
        string word = "", res = "";
        while (all >> word) {
            res = word + " " + res;
        }
        return res.substr(0, res.size() - 1);
    }
};
