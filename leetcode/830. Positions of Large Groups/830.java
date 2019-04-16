// https://helloacm.com/how-to-find-positions-of-large-groups-using-two-pointer-algorithm/
// https://leetcode.com/problems/positions-of-large-groups/

class Solution {
    public List<List<Integer>> largeGroupPositions(String S) {
        List<List<Integer>> res = new ArrayList();
        int i = 0, len = S.length();
        while (i < len) {
            int j = i + 1;
            while (j < len && S.charAt(j) == S.charAt(i)) {
                j ++;
            }
            if (j - i + 1 > 3) {
                res.add( Arrays.asList(new Integer[]{i, j - 1}) );
            }
            i = j;
        }
        return res;
    }
}
