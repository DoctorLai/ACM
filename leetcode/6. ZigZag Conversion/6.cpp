// https://helloacm.com/the-string-zigzag-conversion-algorithms/
// https://leetcode.com/problems/zigzag-conversion/
// MEDIUM, STRING, SIMULATION

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        vector<string> rows(min((int)s.size(), numRows));
        bool down = false;        
        int row = 0;
        for (int i = 0; i < s.size(); ++ i) {
            rows[row] += s[i];
            if ((row == 0) || (row == numRows - 1)) {
                down = !down;
            }
            row += down ? 1 : -1;
        }        
        string ss = "";
        for (const auto &n: rows) {
            ss += n;
        }
        return ss;
    }
};
