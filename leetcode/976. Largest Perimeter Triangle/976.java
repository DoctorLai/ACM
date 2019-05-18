// https://helloacm.com/greedy-algorithm-to-find-the-largest-perimeter-triangle-by-sorting/
// https://leetcode.com/problems/largest-perimeter-triangle/

class Solution {
    public int largestPerimeter(int[] A) {
        Arrays.sort(A);
        for (int i = A.length - 3; i >= 0; -- i) {
            if (A[i] + A[i + 1] > A[i + 2]) {
                return A[i] + A[i + 1] + A[i + 2];
            }
        }
        return 0;        
    }
}
