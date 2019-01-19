// https://helloacm.com/how-to-find-n-repeated-element-in-size-2n-array/ 
// https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

class Solution {
    public int repeatedNTimes(int[] A) {
        Set<Integer> set = new HashSet<>();
        for (int a: A) {
            if (set.contains(a)) {
                return a;
            }
            set.add(a);   
        }
        throw null; // input array is not what has been described
    }
}