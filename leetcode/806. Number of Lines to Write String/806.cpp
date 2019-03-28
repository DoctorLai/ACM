// https://helloacm.com/compute-number-of-lines-to-write-string-wordwrap/
// https://leetcode.com/problems/number-of-lines-to-write-string/

class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int row = 0;
        int r = 1;
        for (int i = 0; i < S.size(); ++ i) {
            int w = widths[S[i] - 97];
            row += w;
            if (row > 100) {
                r ++;
                row = w;
            }
        }
        return {r, row};
    }
};
