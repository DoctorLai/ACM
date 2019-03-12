// https://helloacm.com/the-intersection-algorithm-of-two-arrays-using-hash-maps-in-c-java-javascript/
// https://leetcode.com/problems/intersection-of-two-arrays-ii/

class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        List<Integer> r = new ArrayList<Integer>();
        HashMap<Integer, Integer> count = new HashMap<Integer, Integer>();
        for (int n: nums1) {
            if (!count.containsKey(n)) {
                count.put(n, 1);
            } else {
                count.put(n, count.get(n) + 1);
            }
        }
        for (int n: nums2) {
            if (count.containsKey(n)) {
                if (count.get(n) > 0) {
                    r.add(n);
                    count.put(n, count.get(n) - 1);
                }
            }
        }
        return r.stream().mapToInt(Integer::intValue).toArray();
    }
}
