// https://helloacm.com/the-algorithm-to-construct-the-rectangle-given-its-area/
// https://leetcode.com/problems/construct-the-rectangle/

class Solution {
    public int[] constructRectangle(int area) {
        if (area == 0) return new int[] {0, 0};
        int x = (int)(Math.sqrt(area));
        while (area % x != 0) {
            x --;
        }
        return new int[] { area / x, x };
    }
}
