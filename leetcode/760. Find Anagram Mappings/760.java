// https://helloacm.com/the-algorithm-to-find-anagram-mappings-between-two-arrays/
// https://leetcode.com/problems/find-anagram-mappings/

class Solution {
    public int[] anagramMappings(int[] A, int[] B) {
        Map<Integer, Integer> D = new HashMap();
        for (int i = 0; i < B.length; ++i) {
            D.put(B[i], i);
        }
        int[] ans = new int[A.length];
        int t = 0;
        for (int x: A) {
            ans[t++] = D.get(x);
        }
        return ans;
    }
}
