// https://helloacm.com/compute-number-of-lines-to-write-string-wordwrap/
// https://leetcode.com/problems/number-of-lines-to-write-string/

class Solution {
    public int[] numberOfLines(int[] widths, String S) {
        int row = 0;
        int r = 1;
        for (int i = 0; i < S.length(); ++ i) {
            int w = widths[S.charAt(i) - 97];
            row += w;
            if (row > 100) {
                r ++;
                row = w;
            }
        }
        return new int[] {r, row};
    }
}
