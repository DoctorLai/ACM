// https://helloacm.com/how-to-find-n-repeated-element-in-size-2n-array/ 
// https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

class Solution {
    public int repeatedNTimes(int[] A) {
        Random random = new Random();
        int i, j;
        while ((A[i = random.nextInt(A.length)]) != (A[j = random.nextInt(A.length)]) || i == j  );
        return A[i];
    }
}