// https://helloacm.com/the-algorithm-to-construct-the-rectangle-given-its-area/
// https://leetcode.com/problems/construct-the-rectangle/

class Solution {
    public int[] constructRectangle(int area) {
        if (area == 0) return new int[] {0, 0};
        int x = (int)Math.sqrt(area);
        while (x <= area) {
            if (area % x == 0) {
                int min = Math.min(x, area / x);
                int max = Math.max(x, area / x);
                return new int[] { max, min };
            }
            x ++;
        }
        return new int[] { -1, -1 }; // should not reach here.
    }
}
