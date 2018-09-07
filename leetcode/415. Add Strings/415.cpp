// https://helloacm.com/how-to-add-two-strings-numerically/
// https://leetcode.com/problems/add-strings/

class Solution {
public:
    string addStrings(string num1, string num2) {
        string r = "";
        int sz1 = num1.size();
        int sz2 = num2.size();
        int i = 0, j = 0, c = 0;
        while (i < sz1 || j < sz2 || c > 0) {
            int t = c;
            t += i < sz1 ? num1[sz1 - i - 1] - 48 : 0;
            t += j < sz2 ? num2[sz2 - j - 1] - 48 : 0;
            r = string(1, t % 10 + 48) + r;
            c = t / 10;
            i ++;
            j ++;
        }
        return r;
    }
};
