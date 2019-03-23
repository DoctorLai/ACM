// https://helloacm.com/compute-the-sum-of-even-numbers-after-queries/
// https://leetcode.com/problems/sum-of-even-numbers-after-queries/

class Solution {
    public int[] sumEvenAfterQueries(int[] A, int[][] queries) {
        int num = queries.length;
        int[] sum = new int[num];
        int cursum = 0;
        for (int a: A) {
            if (a % 2 == 0) {
                cursum += a;
            }
        }
        for (int i = 0; i < num; ++ i) {
            int idx = queries[i][1];
            int val = queries[i][0];
            if (A[idx] % 2 == 0) cursum -= A[idx];
            A[idx] += val;
            if (A[idx] % 2 == 0) cursum += A[idx];
            sum[i] = cursum;
        }
        return sum;
    }
}

