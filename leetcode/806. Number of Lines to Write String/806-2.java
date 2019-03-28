// https://helloacm.com/compute-number-of-lines-to-write-string-wordwrap/
// https://leetcode.com/problems/number-of-lines-to-write-string/

class Solution {
    public int[] numberOfLines(int[] widths, String S) {
        int row = 0;
        int r = 1;
        for (char c: S.toCharArray()) {
            int w = widths[c - 97];
            row += w;
            if (row > 100) {
                r ++;
                row = w;
            }
        }
        return new int[] {r, row};
    }
}
