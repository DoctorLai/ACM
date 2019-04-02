// https://helloacm.com/binary-prefix-divisible-by-5-java-c-coding-exercise/
// https://leetcode.com/problems/binary-prefix-divisible-by-5/

class Solution {
    public List<Boolean> prefixesDivBy5(int[] A) {
        List<Boolean> r = new ArrayList<>();
        int num = 0;
        for (int x: A) {
            num = ((num << 1) + x) % 5;
            r.add(num % 5 == 0);
        }        
        return r;
    }
}
