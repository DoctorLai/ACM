// https://helloacm.com/algorithm-to-find-minimum-removals-to-make-valid-parentheses/
// https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/
// MEDIUM, GREEDY, PARENTHESES

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string a = "";
        int balance = 0;
        // from left to right
        for (const auto &n: s) {
            if (n == '(') {
                balance ++;
                a += n;
            } else if (n == ')') {
                if (balance > 0) {
                    a += n;
                    balance --;
                }
            } else {
                a += n;
            }
        }
        string b = "";
        balance = 0;
        // from right to left
        for (int i = a.size() - 1; i >= 0; -- i) {
            char n = a[i];
            if (n == ')') {
                balance ++;
                b += n;
            } else if (n == '(') {
                if (balance > 0) {
                    b += n;
                    balance --;
                }
            } else {
                b += n;
            }
        }      
        std::reverse(begin(b), end(b));
        return b;
    }
};
